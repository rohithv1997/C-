#include <conio.h>
#include<stdlib.h>

struct node
{   struct node *prev;
    int n;
    struct node *next;
}*h,*temp,*temp1,*temp2,*temp4;

void insert1();
void insert2();
void insert3();
void display1();
void display2();
void delete1();

int count = 0;

void main()
{   int ch=1;
    h = NULL;
    temp =NULL;
    temp1 = NULL;
    clrscr();
    printf("Doubly Linked List\n");
    printf("\n 1 - Insert at beginning");
    printf("\n 2 - Insert at end");
    printf("\n 3 - Insert at position ");
    printf("\n 4 - Delete at position");
    printf("\n 5 - Display from beginning");
    printf("\n 6 - Display from End");
    printf("\n 7 - Exit");
    while (ch==1)
    {   printf("\n Enter choice : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	    insert1();
	    break;
	case 2:
	    insert2();
	    break;
	case 3:
	    insert3();
	    break;
	case 4:
	    delete1();
	    break;
	case 5:
	    display2();
	    break;
	case 6:
	    display1();
	    break;
	case 7 :
	    exit(0);
	default:
	    printf("\nError: Wrong Choice");
	}
	printf("\n\nEnter 1 to Continue\n");
	scanf("%d",&ch);
    }
    getch();
}


void create()
{   int data;
    temp =(struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\n Enter value\t");
    scanf("%d", &data);
    temp->n = data;
    count++;
}


void insert1()
{   if (h == NULL)
    {   create();
	h = temp;
	temp1 = h;
    }
    else
    {	create();
	temp->next = h;
	h->prev = temp;
	h = temp;
    }
}



void insert2()
{   if (h == NULL)
    {   create();
	h = temp;
	temp1 = h;
    }
    else
    {   create();
	temp1->next = temp;
	temp->prev = temp1;
	temp1 = temp;
    }
}



void insert3()
{   int pos, i = 2;
    printf("\n Enter position to be inserted : ");
    scanf("%d", &pos);
    temp2 = h;
    if ((pos < 1) || (pos >= count + 1))
    {   printf("\nError: Out of Range");
	return;
    }
    if ((h == NULL) && (pos != 1))
    {   printf("\nError: Empty List");
	return;
    }
    if ((h == NULL) && (pos == 1))
    {   create();
	h = temp;
	temp1 = h;
	return;
    }
    else
    {   while (i < pos)
	{   temp2 = temp2->next;
	    i++;
	}
	create();
	temp->prev = temp2;
	temp->next = temp2->next;
	temp2->next->prev = temp;
	temp2->next = temp;
    }
}



void delete1()
{	int i = 1, pos;
    	
printf("\n Enter position to be deleted : ");
    	scanf("%d", &pos);
    	temp2 = h;
    	
if ((pos < 1) || (pos >= count + 1))
    	{	printf("\n Error: Out of Range");
		return;
    	}
    	
if (h == NULL)
    	{	printf("\n Error: Empty List");
		return;
    	}
    
else
    	{	while (i < pos)
		{   temp2 = temp2->next;
	    		i++;
		}
		
if (i== 1)
		{   	if (temp2->next == NULL)
	    		{	h = temp2->next;
		printf("\n Node deleted from list");
				free(temp2);
				return;
	    		}
		}
		
if (temp2->next == NULL)
		{	temp2->prev->next = NULL;
	    		free(temp2);
	    		printf("Node deleted from list");
	    		return;
		}
		
		else if (i != 1)
		{	temp2->next->prev = temp2->prev;
			temp2->prev->next = temp2->next;
			printf("\n Node deleted from list");
			free(temp2);
    			return;
}
    		count--;
}
}



void display2()
{   temp2 = h;
    if (temp2 == NULL)
    {	printf("Error: Empty List \n");
	return;
    }
    printf("\nLinked List: ");
    while (temp2->next != NULL)
    {  	printf("%d->", temp2->n);
	temp2 = temp2->next;
    }
    printf("%d->NULL", temp2->n);
}


void display1()
{	temp4=h;
	printf("Linked List : ");
	while(temp4->next!=NULL)
		temp4=temp4->next;
	while(temp4->prev!=NULL)
	{	printf("%d->",temp4->n);
		temp4=temp4->prev;
	}
	printf("%d->NULL",temp4->n);
}

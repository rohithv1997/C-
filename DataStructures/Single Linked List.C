#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node *next;
};

struct node* create_node(int);

int main()
{	int choice, nodes, element, position,value,pos,counter=0, i;
	
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *p=(struct node *)malloc(sizeof(struct node));
	struct node *start = (struct node *)malloc(sizeof(struct node));
	struct node *s=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=(struct node *) malloc(sizeof(struct node));
	
	while (1)
	{	printf("1.Insert Node at beginning\n");
		printf("2.Insert node at last\n");
		printf("3.Insert node at position\n");
		printf("4.Delete a Particular Node\n");
		printf("5.Display Linked List\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		if(choice==1)
		{	printf("Inserting Node at Beginning: \n");
			printf("Enter the value to be inserted: ");
			scanf("%d",&value);
			temp = create_node(value);
			if (start==NULL)
			{	start=temp;
				start->next=NULL;
			}
			else
			{	p=start;
				start = temp;
				start->next = p;
			}
			printf("Element Inserted at beginning\n");
			printf("\n");
		}

		else if(choice== 2)
		{	printf("Inserting Node at Last: \n");
			printf("Enter the value to be inserted: ");
			scanf("%d",&value);
			temp = create_node(value);
			s = start;
			while (s->next != NULL)
				s = s->next;
			temp->next = NULL;
			s->next = temp;
			printf("Element Inserted at last\n");
		}

		else if(choice==3)
		{	printf("Enter the value to be inserted: ");
			scanf("%d",&value);
			temp = create_node(value);
			printf("Enter the postion at which node to be inserted: ");
			scanf("%d",&pos);
			s = start;
			while (s != NULL)
			{	s = s->next;
				counter++;
			}
			if (pos == 1)
			{	if (start == NULL)
				{	start = temp;
					start->next = NULL;
				}
				else
				{	ptr = start;
					start = temp;
					start->next = ptr;
				}
			}
			else if (pos > 1  && pos <= counter)
			{     	s = start;
				for (i = 1; i < pos; i++)
				{	ptr = s;
					s = s->next;
				}
				ptr->next = temp;
				temp->next = s;
			}
			else
				printf("Positon out of range\n\n");
		 }

		else if(choice==4)
		{	printf("Delete a particular node: \n");
			if (start == NULL)
				printf("List is empty\n");
			else
			{      	printf("Enter the position of value to be deleted: ");
				scanf("%d",&pos);
				s = start;
				if (pos == 1)
					start = s->next;
				else
				{	while (s != NULL)
					{	s = s->next;
						counter++;
					}
					if (pos > 0 && pos <= counter)
					{	s = start;
						for (i = 1;i < pos;i++)
						{	ptr = s;
							s = s->next;
						}
						ptr->next = s->next;
					}
					else
						printf("Position out of range\n\n");

					free(s);
					printf("Element Deleted\n");
				}
			}
		}

		else if(choice==5)
		{	printf("Display elements of link list\n");
			if (start == NULL)
				printf("The List is Empty\n");
			temp = start;
			printf("Elements of list are: \n");
			while (temp != NULL)
			{	printf("%d -> ",temp->info);
				temp = temp->next;
			}
			printf("NULL\n\n");
		}

		else if(choice==6)
			break;
		else
			printf("Wrong choice\n");
	}
	getch();
	temp->next=NULL;
	temp=start->next;
	while(temp!=0)
	{	start->next=temp->next;
		free (temp);
	}
	free (start);
	free (temp);
getch();
return 0;
}


struct node* create_node(int value)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
    	{	printf("Memory not allocated \n");
		return 0;
    	}
    	else
    	{	temp->info = value;
		temp->next = NULL;
		return temp;
    	}
}



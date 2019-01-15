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
{	int choice, value;

	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *p=(struct node *)malloc(sizeof(struct node));
	struct node *top = (struct node *)malloc(sizeof(struct node));
	struct node *s=(struct node *)malloc(sizeof(struct node));

	while (1)
	{       printf("Stack using Linked List\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		if(choice==1)
		{	printf("Push a Node: \n");
			printf("Enter value:  ");
			scanf("%d",&value);
			temp = create_node(value);
			if (top==NULL)
			{	top=temp;
				top->next=NULL;
			}
			else
			{	p=top;
				top = temp;
				top->next = p;
			}
			printf("Element Pushed\n\n");
		}

		else if(choice==2)
		{	if (top == NULL)
				printf("Underflow\n");
			else
			{    s = top;
				printf("Popped Node: %d\n\n",s->info);
				top = s->next;
			}
			free(s);
		}

		else if(choice==3)
		{	printf("Display Stack\n");
			if (top == NULL)
				printf("Underflow\n");
			else
			{	temp = top;
				printf("Elements: \t");
				while (temp != NULL)
				{	printf("%d -> ",temp->info);
					temp = temp->next;
				}
				printf("NULL\n\n");
			}
		}

		else if(choice==4)
			break;
		else
			printf("Wrong choice\n");
	}
	getch();
	temp->next=NULL;
	temp=top->next;
	while(temp!=0)
	{	top->next=temp->next;
		free (temp);
	}
	free (top);
	free (temp);
getch();
return 0;
}


struct node* create_node(int value)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
	{	printf("Overflow \n");
		return 0;
	}
	else
	{	temp->info = value;
		temp->next = NULL;
		return temp;
	}
}



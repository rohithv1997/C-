#include<conio.h>
#include<stdio.h>

struct node
{
	int data;
	struct node* next;

};
int n=0;


struct node* head;
void insert(int x)
{

	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;;
	head=temp;
	n=n+1;
}

void del()
{
	struct node* temp2;
	struct node* temp1=head;

	int i;
	for(i=0;i<n-2;i++)
	temp1=temp1->next;

	 temp2=temp1->next;
	temp1->next=temp2->next ;

}
void print()
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d \n",temp->data);
		temp=temp->next;
	}
	printf("\n");

 }
 void main()
 {
	clrscr();
	insert(100);
	insert(10);
	insert(12);
	insert(15);
	del();
	print();
 getch();
}
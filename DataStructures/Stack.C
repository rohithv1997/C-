#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10

void push();
void pop();
void display();
int menu();
int stack[max],top=0;

void main()
{
int ch;
clrscr();
do{
ch=menu();
switch(ch)
	{
	case 1: push();
	break;
	case 2: pop();
	break;
	case 3: display();
	break;
	case 4:exit(0);
	break;
	default: printf("\nINVALID ENTRY!!\n");
	}
}while(1);
}

int menu()
{
	int ch;
	printf("\nenter your choice\n");
	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&ch);
	return ch;
}

void push()
{
	if(top==max)
		printf("\nOVERFLOW\n");
	else
	{
	int element;
	printf("\nEnter Element\n");
	scanf("%d",&element);
	printf("\nElement %d is inserted at %d position/n",element,top);
	stack[top++]=element;
	}
}
void pop()
{
	if(top==-1)
	{
	printf("\nUNDERFLOW\n");
	}
	else
	{
	top--;
	printf("the elemnt at %d position is popped out!",top);
	}
}

void display()
{
	if(top==0)
	printf("\nStack is Empty!\n");
	else
	{
		int i;
		for(i=0;i<top;i++)
		{
			printf("%d",stack[i]);
		}
	}
}





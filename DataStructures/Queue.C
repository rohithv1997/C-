#include<conio.h>

int arr[20]={0}, f=-1, r=-1;

void enq(int arr[20], int e, int* f, int*r)
{	if((*r)+1==20)
		printf("Overflow\n");
	else
	{	if(*f==*r && *r==-1)
		{	*f=0;
			*r=0;
			arr[*f]=e;
		}
		else
			arr[++(*r)]=e;
	}
}

void deq(int arr[20], int* f, int* r)
{	if(*f==-1)
		printf("Underflow\n");
	else
	{	if(*f==*r)
		{       printf("%d is deleted\n",arr[*f]);
			*f=-1;
			*r=-1;
		}
		else
			printf("%d is deleted\n",arr[(*f)++]);
	}
}

void display(int arr[20], int* f, int* r)
{       int i;
	if(*f==*r && *r==-1)
		printf("Empty Queue\n");
	else
	{	printf("Queue:");
		for(i=*f;i<=*r;i++)
			printf(" %d ",arr[i]);
	}
}

int main()
{	int c=1;
	clrscr();
	while(c==1)
	{       printf("\n\nQueue :\n1.Enqueue\n2.Dequeue\n3.Display\nEnter Choice\t");
		scanf("%d",&c);
		if(c==1)
		{       printf("Enter Element\t");
			scanf("%d",&c);
			enq(arr,c,&f,&r);
		}
		else if(c==2)
			deq(arr,&f,&r);
		else if(c==3)
			display(arr,&f,&r);
		printf("\nEnter 1 to continue\n");
		scanf("%d",&c);
	}
	getch();
	return 0;
}

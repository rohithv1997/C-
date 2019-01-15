#include<iostream.h>
#include<stdio.h>

/* Program #17:
	To implement Linked Implement Queue with a self referencing member*/

struct book{	int code;
					char name[20];
					float price;
					book *next;
			  };

book *front=NULL;
book *rear=NULL;


void insert()
{	book *temp1=new book;
	if(temp1)
	{	cout<<"Enter Code"<<endl;
		cin>>temp1->code;
		cout<<"Enter Name"<<endl;
		gets(temp1->name);
		cout<<"Enter Price"<<endl;
		cin>>temp1->price;
      temp1->next=NULL;
		if(rear)
		{	rear->next=temp1;
			rear=temp1;
		}
		else
			front=rear=temp1;
	}
	else
		cout<<"Overflow"<<endl;
}


void deletion()
{	if(front)
	{	book *temp2=front;
		front=front->next;
		if(front==NULL)
			rear=NULL;
		delete temp2;
	}
	else
		cout<<"Underflow"<<endl;
}


void display()
{	if(front)
	{	book *temp3=front;
		while(temp3)
		{	cout<<"Code : \t"<<temp3->code<<endl;
			cout<<"Name : \t"<<temp3->name<<endl;
			cout<<"Price : \t"<<temp3->price<<endl;
			temp3=temp3->next;
		}
	}
	else
		cout<<"Empty Queue"<<endl;
}


void releasenodes()
{	book *temp4=front;
	while(temp4)
	{	front=front->next;
		if(front==NULL)
			rear=NULL;
		delete temp4;
		temp4=front;
	}
}


void main()
{	int c=10;
	while(c==10)
	{	cout<<endl<<endl<<"Linked Implemnted Queue Menu"<<endl;
		cout<<"1.Insert Node"<<endl;
		cout<<"2.Delete Node"<<endl;
		cout<<"3.Display all Nodes"<<endl;
		cout<<"Enter Choice"<<endl;
		cin>>c;
		switch(c)
		{	case 1 : insert();
						break;
			case 2 : deletion();
						break;
			case 3 : display();
						break;
			default:	cout<<"Wrong Choice"<<endl;
						break;
		}
		cout<<"Press 1 to Continue"<<endl;
		cin>>c;
		if(c==1)
			c=10;
	}
   releasenodes();
}

/*Sample Input/Output:


Linked Implemnted Queue Menu
1.Insert Node
2.Delete Node
3.Display all Nodes
Enter Choice
1
Enter Code
1234
Enter Name
Secret Seven Series
Enter Price
123.45
Press 1 to Continue
1


Linked Implemnted Queue Menu
1.Insert Node
2.Delete Node
3.Display all Nodes
Enter Choice
1
Enter Code
2345
Enter Name
Famous Five Series
Enter Price
234.56
Press 1 to Continue
1


Linked Implemnted Queue Menu
1.Insert Node
2.Delete Node
3.Display all Nodes
Enter Choice
1
Enter Code
3456
Enter Name
Harry Potter Series
Enter Price
345.67
Press 1 to Continue
1


Linked Implemnted Queue Menu
1.Insert Node
2.Delete Node
3.Display all Nodes
Enter Choice
2
Press 1 to Continue
1


Linked Implemnted Queue Menu
1.Insert Node
2.Delete Node
3.Display all Nodes
Enter Choice
3


Code :  2345
Name :  Famous Five Series
Price :         234.56


Code :  3456
Name :  Harry Potter Series
Price :         345.67
Press 1 to Continue
0
*/

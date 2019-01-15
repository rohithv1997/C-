#include<iostream.h>
#include<stdio.h>

/* Program #16:
To implement Linked Implemented Stack with a self referencing member*/

struct book{	int code;
					char name[20];
					float price;
					book *next;
			  };

book *tmp='\0';
book *top=NULL;


void push()
{	book *newptr=new book;
	if(newptr=='\0')
		cout<<"Over Flow !!"<<endl;
	else
	{	cout<<"Enter Code"<<endl;
		cin>>newptr->code;
		cout<<"Enter Name"<<endl;
		gets(newptr->name);
		cout<<"Enter Price"<<endl;
		cin>>newptr->price;
		newptr->next='\0';
		if(top)
			newptr->next=top;
		top=newptr;
	}
}



void pop()
{	if(top==NULL)
		cout<<"Under Flow !!"<<endl;
	else
	{	cout<<"Deleted Data : "<<endl;
		cout<<"Code : \t"<<top->code<<endl;
		cout<<"Name : \t"<<top->name<<endl;
		cout<<"Price : \t"<<top->price<<endl;
		tmp=top;
		top=top->next;
		delete tmp;
	}
}


void display()
{	if(top==NULL)
		cout<<"Empty Stack"<<endl;
	else
	{	tmp=top;
		while(tmp)
		{	cout<<"Code : \t"<<tmp->code<<endl;
			cout<<"Name : \t"<<tmp->name<<endl;
			cout<<"Price : \t"<<tmp->price<<endl;
			tmp=tmp->next;
		}
	}
}


void main()
{	int c=10, i;
	while(c==10)
	{	cout<<"Linked Implemented Stack Menu"<<endl;
		cout<<"1.Push Element"<<endl;
		cout<<"2.Pop Element"<<endl;
		cout<<"3.Display Stack"<<endl;
		cout<<"Enter Choice"<<endl;
		cin>>c;
		if(c==1)
			push();
		else if(c==2)
			pop();
		else if(c==3)
			display();
		cout<<"Enter 1 to Continue"<<endl;
		cin>>c;
		if(c==1)
			c=10;
	}
	tmp=top;
	while(tmp)
	{	top=top->next;
		delete tmp;
		tmp=top;
	}
}

/*Sample Input/Output:

Linked Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
1
Enter Code
1234
Enter Name
Wings Of Fire
Enter Price
123.45
Enter 1 to Continue
1

Linked Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
1
Enter Code
2345
Enter Name
Harry Potter Series
Enter Price
234.56
Enter 1 to Continue
1

Linked Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
1
Enter Code
3456
Enter Name
Shiva Triology
Enter Price
345.67
Enter 1 to Continue
1

Linked Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
3

Code :  3456
Name :  Shiva Triology
Price :         345.67

Code :  2345
Name :  Harry Potter Series
Price :         234.56

Code :  1234
Name :  Wings Of Fire
Price :         123.45
Enter 1 to Continue
1

Linked Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
2

Deleted Data :
Code :  3456
Name :  Shiva Triology
Price :         345.67
Enter 1 to Continue
0
*/

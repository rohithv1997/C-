#include<iostream.h>
#include<string.h>
#include<stdio.h>
/*Program#14:
To implement array implemented stack */

class book{	int code;
				char name[20];
				float price;

				public:
				book();
				void indata();
				void outdata();
			 }list[10];

int top=-1;


book::book()
{	code=0;
	strcpy(name,"No Name");
	price=0.0;
}


void book::indata()
{	cout<<"Enter Code"<<endl;
	cin>>code;
	cout<<"Enter Name"<<endl;
	gets(name);
	cout<<"Enter Price"<<endl;
	cin>>price;
}


void book::outdata()
{	cout<<endl<<endl;
	cout<<"Code : "<<'\t'<<code<<endl;
	cout<<"Name : "<<'\t'<<name<<endl;
	cout<<"Price : "<<'\t'<<price<<endl;
}


void push()
{	if(top==9)
		cout<<"Over Flow !!"<<endl;
	else
	{	book tmp;
		cout<<"Enter Data to be Pushed"<<endl;
		tmp.indata();
		list[++top]=tmp;
	}
}


void pop()
{  if(top==-1)
		cout<<"Under Flow !!"<endl;
	else
	{	cout<<"Deleted Data"<<endl;
		list[top].outdata();
		--top;
	}
}

void main()
{	int c=10, i;
	while(c==10)
	{	cout<<"Array Implemented Stack Menu"<<endl;
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
		{	for(i=0;i<=top;i++)
				list[i].outdata();
		}
		cout<<"Enter 1 to Continue"<<endl;
		cin>>c;
		if(c==1)
			c=10;
	}
}


/*Sample Input/Output:

Array Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
1
Enter Data to be Pushed
Enter Code
1234
Enter Name
da vinci code
Enter Price
123.45
Enter 1 to Continue
1
Array Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
1
Enter Data to be Pushed
Enter Code
2345
Enter Name
lost symbol
Enter Price
234.56
Enter 1 to Continue
1
Array Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
1
Enter Data to be Pushed
Enter Code
3456
Enter Name
harry potter
Enter Price
345.67
Enter 1 to Continue
1
Array Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
2
Deleted Data


Code :  3456
Name :  harry potter
Price :         345.67
Enter 1 to Continue
1


Array Implemented Stack Menu
1.Push Element
2.Pop Element
3.Display Stack
Enter Choice
3


Code :  1234
Name :  da vinci code
Price :         123.45


Code :  2345
Name :  lost symbol
Price :         234.56
Enter 1 to Continue
0

*/

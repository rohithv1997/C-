#include<iostream.h>
#include<string.h>
#include<stdio.h>
/*Program#16:
To implement array implemented  Circular Queue*/

class book{	int code;
				char name[20];
				float price;

				public:
				book();
				void indata();
				void outdata();
			 }list[10];

int f=-1, r=-1;


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


void insert()
{	if((r==9 && f==0) || (r+1==f))
		cout<<"Overflow"<<endl;
	else if(f==-1)
	{	f=0;
		r=0;
		list[r].indata();
	}
	else
	{	++r;
		list[r].indata();
	}
}


void deletion()
{	if(f==-1)
		cout<<"Underflow"<<endl;
	else if(f==r)
	{	cout<<"Deleted Data"<<endl;
		list[f].outdata();
		f=-1;
		r=-1;
	}
	else if(f>r && f==9)
	{	cout<<"Deleted Data"<<endl;
		list[f].outdata();
		f=0;
	}
	else
	{	cout<<"Deleted Data"<<endl;
		list[f].outdata();
		++f;
	}
}


void display()
{  int i;
	if(f==-1)
		cout<<"Empty Queue"<<endl;
	else if(f>r)
	{	for(i=f;i<10;i++)
			list[i].outdata();
		for(i=0;i<=r;i++)
			list[i].outdata();
	}
	else
		for(i=f;i<=r;i++)
			list[i].outdata();
}


void main()
{	int c=10, i;
	while(c==10)
	{	cout<<"Array Implemented  Circular Queue Menu"<<endl;
		cout<<"1.Insert Element"<<endl;
		cout<<"2.Delete Element"<<endl;
		cout<<"3.Display Queue"<<endl;
		cout<<"Enter Choice"<<endl;
		cin>>c;
		if(c==1)
			insert();
		else if(c==2)
			deletion();
		else if(c==3)
			display();
		cout<<"Enter 1 to Continue"<<endl;
		cin>>c;
		if(c==1)
			c=10;
	}
}

/*Sample Input/Output:
Array Implemented  Circular Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
1
Enter Code
1234
Enter Name
bourne legacy
Enter Price
123.45
Enter 1 to Continue
1
Array Implemented  Circular Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
1
Enter Code
2345
Enter Name
shiva triology
Enter Price
234.56
Enter 1 to Continue
1
Array Implemented  Circular Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
1
Enter Code
3456
Enter Name
been there
Enter Price
345.67
Enter 1 to Continue
1
Array Implemented  Circular Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
2
Deleted Data


Code :  1234
Name :  bourne legacy
Price :         123.45
Enter 1 to Continue
1
Array Implemented  Circular Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
3


Code :  2345
Name :  shiva triology
Price :         234.56


Code :  3456
Name :  been there
Price :         345.67
Enter 1 to Continue
0
*/
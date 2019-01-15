#include<iostream.h>
#include<string.h>
#include<stdio.h>
/*Program#15:
To implement array implemented Queue*/

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
{	book tmp;
	cout<<"Enter Data to be Inserted"<<endl;
	if(r==9)
		cout<<"Overflow"<<endl;
	else if(r==-1)
	{	f=0;
		r=0;
		tmp.indata();
		list[r]=tmp;
	}
	else
	{	++r;
		tmp.indata();
		list[r]=tmp;
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
	else
	{	cout<<"Deleted Data"<<endl;
		list[f].outdata();
		++f;
	}
}

void main()
{	int c=10, i;
	while(c==10)
	{	cout<<"Array Implemented Queue Menu"<<endl;
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
		{  if(f==-1)
				cout<<"Empty Queue"<<endl;
			else
				for(i=f;i<=r;i++)
					list[i].outdata();
		}
		cout<<"Enter 1 to Continue"<<endl;
		cin>>c;
		if(c==1)
			c=10;
	}
}

/*Sample Input/Output:
Array Implemented Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
1
Enter Data to be Inserted
Enter Code
1234
Enter Name
harry potter
Enter Price
123.45
Enter 1 to Continue
1
Array Implemented Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
1
Enter Data to be Inserted
Enter Code
2345
Enter Name
bourne series
Enter Price
234.56
Enter 1 to Continue
1
Array Implemented Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
1
Enter Data to be Inserted
Enter Code
3456
Enter Name
revolution 2020
Enter Price
345.67
Enter 1 to Continue
1
Array Implemented Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
2
Deleted Data


Code :  1234
Name :  harry potter
Price :         123.45
Enter 1 to Continue
1
Array Implemented Queue Menu
1.Insert Element
2.Delete Element
3.Display Queue
Enter Choice
3


Code :  2345
Name :  bourne series
Price :         234.56


Code :  3456
Name :  revolution 2020
Price :         345.67
Enter 1 to Continue
0
*/
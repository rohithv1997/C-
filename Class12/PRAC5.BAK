#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

/*Program #5:
A textile shop announces   2 prizes for their customers.
For this, owner wants to choose 1 customer in  each gender randomly.
Define a class"Lucky Draw " and find lucky customer*/

int choz=0, n;

struct add{	char addz[3][20];
			 } ;

class lucky_draw{	int regino;
						char name[20];
						add address;
						long ph_landline;
						char gender;

						public:
						lucky_draw();
						void choose();
						void indata();
						void dispdata();
						} list[10];

lucky_draw::lucky_draw()
{	regino=10;
	gender='n';
	strcpy(name,"ABCD");
	for(int i=0;i<3;i++)
		strcpy(address.addz[i],"XYZ");
	ph_landline=0;
}

void lucky_draw:: dispdata()
{ 	cout<<"Registration Number"<<'\t'<<regino<<endl;
	cout<<"Name"<<'\t'<<name<<endl;
	cout<<"Gender"<<'\t'<<gender<<endl;
	cout<<"Address"<<'\t';
	for(int i=0;i<3;i++)
		cout<<address.addz[i]<<endl;
	cout<<endl<<"Land Line"<<'\t'<<ph_landline<<endl;
}

void lucky_draw::indata()
{	cout<<endl<<"Enter Registration Number"<<endl;
	cin>>regino;
	while(regino<10 || regino>1000)
	{	cout<<"Enter Registration Number Again"<<endl;
		cin>>regino;
	}
	cout<<"Enter Name"<<endl;
	gets(name);
	cout<<"Enter Gender"<<endl;
	cin>>gender;
	while(gender!='m' && gender!='f')
	{	cout<<"Enter Gender Again"<<endl;
		cin>>gender;
	}
	cout<<"Enter Address"<<endl;
	for(int i=0;i<3;i++)
		gets(address.addz[i]);
	cout<<"Enter Land Line"<<endl;
	cin>>ph_landline;
}

void lucky_draw::choose()
{  int flag=1;
	while(flag)
	{	randomize();
		choz=10+random(991);
		cout<<"Random Number Generated:"<<choz<<endl;
		getch();
		for(int i=0;i<n;i++)
		{  if(list[i].regino==choz && list[i].gender=='m')
			{	list[i].dispdata();
				flag=0;
				break;
			}
		}
		if(i==n && flag==1)
			continue;
	}
	flag=2;
	while(flag)
	{	randomize();
		choz=10+random(991);
		cout<<"Random Number Generated:"<<choz<<endl;
		getch();
		for(int i=0;i<n;i++)
		{	if(list[i].regino==choz && list[i].gender=='f')
			{	list[i].dispdata();
				flag=0;
				break;
			}
		if(i==n && flag==2)
			continue;
		}
	}
}



void main()
{	int i;
	cout<<"Enter Number of Customers"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
		list[i].indata();
	cout<<endl<<"LUCKY DRAW  WINNERS"<<endl;
	list[0].choose();
}

/*
Sample Input/Output:
Enter Number of Customers
4

Enter Registration Number
123
Enter Name
raghul
Enter Gender
m
Enter Address
q
q
q
Enter Land Line
1

Enter Registration Number
456
Enter Name
rohith
Enter Gender
m
Enter Address
w
w
w
Enter Land Line
2

Enter Registration Number
789
Enter Name
ma'am
Enter Gender
f
Enter Address
e
e
e
Enter Land Line
3

Enter Registration Number
159
Enter Name
anusha
Enter Gender
f
Enter Address
r
r
r
Enter Land Line
4

LUCKY DRAW  WINNERS

Registration Number     123
Name    rohith
Gender  m
Address q
q
q

Land Line       1
Registration Number     789
Name    ma'am
Gender  f
Address e
e
e

Land Line       3

*/


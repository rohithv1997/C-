#include<iostream.h>
#include<stdio.h>
#include<string.h>

/*Program #4 :
Define a class "bill" with following description :

private members:
icode (int)
iname (char [])
price (float)
qty (int)
total_price (float)
discount(float)
calc_disc() - to calculate discount and total_price

public members:
indata() - accepts icode, iname, price, qty.
				invokes calc_disc() to calculate discount and total_price
outdata()- displays details of customer's purchases in neat format and also
total amount to be paid by customer
*/


class bill{	int icode;
				char iname[20];
				float price;
				int qty;
				float total_price;
				float discount;
				float calc_disc();

				public:
				bill();
				void indata();
				void showdata();
	} list[10];

int n=0;
float tot=0.0;

bill::bill()
{  int i;
	for(i=0;i<10;i++)
	{	icode=0;
		strcpy(iname,"ABCD");
		price=0.0;
		qty=0;
		total_price=0.0;
		discount=0.0;
	}
}

float bill::calc_disc()
{     float discount2=0.0;
		total_price=price*(float)(qty);
		if(total_price<1000.0)
			discount2=0.0;
		else if(total_price>=1000.0 && total_price<2000.0)
			discount2=0.01*total_price;
		else if(total_price>=2000.0 && total_price<3000.0)
			discount2=0.02*total_price;
		else if(total_price>=3000.0 && total_price<5000.0)
			discount2=0.03*total_price;
		else if(total_price>=5000.0)
			discount2=0.05*total_price;
		total_price-=discount2;
		for(int i=0;i<n;i++)
			tot+=list[i].total_price;
		return discount2;
}

void bill::indata()
{	int i=1;
	cout<<"BILL DESCRIPTION"<<endl;
	while(i)
	{  cout<<"Enter Code"<<endl;
		cin>>list[n].icode;
		cout<<"Enter Name"<<endl;
		gets(list[n].iname);
		cout<<"Enter Price"<<endl;
		cin>>list[n].price;
		cout<<"Enter Quantity"<<endl;
		cin>>list[n].qty;
		cout<<"Continue.. (1 for YES , 0 for No)"<<endl;
		cin>>i;
		if(i==1)
			i=1;
		else
			i=0;
		++n;
	}
	for(i=0;i<n;i++)
		list[i].discount=list[i].calc_disc();
	return;
}

void bill::showdata()
{	cout<<"BILL DETAILS"<<endl;
	for(int i=0;i<n;i++)
	{	cout<<"Code"<<'\t'<<list[i].icode<<endl;
		cout<<"Name"<<'\t'<<list[i].iname<<endl;
		cout<<"Price"<<'\t'<<list[i].price<<endl;
		cout<<"Quantity"<<'\t'<<list[i].qty<<endl;
		cout<<"Discount"<<'\t'<<list[i].discount<<endl;
		cout<<"Total Price"<<'\t'<<list[i].total_price<<endl;
		cout<<endl;
	}
	cout<<endl<<"Net Total"<<'\t'<<tot<<"Rs";
	return;
}

void main()
{	list[0].indata();
	list[0].showdata();
}

/*	Sample I/O
BILL DESCRIPTION
Enter Code
1234
Enter Name
rice
Enter Price
98.64
Enter Quantity
2000
Continue.. (1 for YES , 0 for No)
1
Enter Code
2345
Enter Name
wheat
Enter Price
67.45
Enter Quantity
9000
Continue.. (1 for YES , 0 for No)
1
Enter Code
3456
Enter Name
biscuit
Enter Price
6.12
Enter Quantity
8000
Continue.. (1 for YES , 0 for No)
0
BILL DETAILS
Code    1234
Name    rice
Price   98.64
Quantity        2000
Discount        9864
Total Price     187416

Code    2345
Name    wheat
Price   67.45
Quantity        9000
Discount        30352.5
Total Price     576698

Code    3456
Name    biscuit
Price   6.12
Quantity        8000
Discount        2448
Total Price     46512

Net Total      810626 Rs
*/

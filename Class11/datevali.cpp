#include<iostream.h>
#include<conio.h>
void main()
{
int y, m, d;
cout<<"Check whether the  Date is Valid or not"<<endl;
cout<<"Enter Date Month Year (dd/mm/yyyy) \n";
cin>>d>>m>>y;
if(y>0 && y<=9999)
{	if(m<13)
	{	if(m==4||m==6||m==9||m==11)
		{	if(d<31)
				cout<<"Valid";
			else
				cout<<"Invalid";
		}
		else if(m==2)
		{
			if(y%4==0 && d<30)
				cout<<"Valid";
			else if(y%4!=0 && d<29)
				cout<<"Valid";
			else
				cout<<"Invalid";
		}
		else
		{	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
			{	if(d<32)
					cout<<"Valid";
				else
					cout<<"Invalid";
			}
		}
	}
	else
		cout<<"Invalid";
	}
else
	cout<<"Invalid";
getch();
}



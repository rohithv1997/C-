#include<iostream.h>
#include<conio.h>
void main()
{
int base, exp, p=1, i;
cout<<"Raise Base to Exponential Power"<<endl;
cout<<"Enter base and Exponent";
cin>>base>>exp;
for(i=1;i<=exp;i++)
	p*=base;
cout<<p;
getch();
}

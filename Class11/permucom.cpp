#include<iostream.h>
#include<conio.h>
void main()
{
long int n, r, p=1, i, a, b, c, tmp, d, per, com;
char ch;
cout<<"No. of Permutations and Combinations"<<endl;
do{
	cout<<"Enter n and r";
	cin>>n>>r;
	if(r>n)
	{	tmp=n;
		n=r;
		r=tmp;
	}
	for(i=1;i<=n;i++)
		p*=i;
	d=n-r;
	a=p;
	p=1;
	for(i=1;i<=d;i++)
		p*=i;
	b=p;
	p=1;
	per=a/b;
	for(i=1;i<=r;i++)
		p*=i;
	c=p;
	p=1;
	com=per/c;
	cout<<per<<"Permutations"<<endl;
	cout<<com<<"Combinations"<<endl;
	cout<<"Continue Y/N..";
	cin>>ch;
	if(ch!='y' || ch!='Y')
		cout<<"Aborting";
	}while(ch=='y' || ch=='Y');
getch();
}


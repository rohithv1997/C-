#include<iostream.h>
#include<conio.h>
void main()
{
long int n, f=1, i=1;
cout<<"Factorial of a number"<<endl;
cout<<"Enter n";
do{
	cin>>n;
	if(!n)
	{	cout<<"Aborting";
		break;
	}
	for(i=1;i<=n;i++)
		f*=i;
	cout<<f<<endl<<"Enter n";
	f=1;
	i=1;
  }while(n);
getch();
}


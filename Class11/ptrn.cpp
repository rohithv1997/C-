#include<iostream.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char inp;
int n, i, j, ch;
cout<<"Diamond Pattern"<<endl;
cout<<"Enter Character"<<endl;
cin>>inp;
if(isalpha(inp))
{	inp=tolower(inp);
	n=inp-96;
	ch=2*(n-1);
	for(i=1;i<=n;i++)
	{	for(j=1;j<=ch;j++)
			cout<<' ';
		for(j=1;j<=i;j++)
			cout<<(char)(96+j)<<' ';
		for(j=i-1;j>=1;j--)
			cout<<(char)(96+j)<<' ';
		ch-=2;
		cout<<endl;
	}
	--n;
	ch+=4;
	for(i=n;i>=1;i--)
	{	for(j=1;j<=ch;j++)
			cout<<' ';
		for(j=1;j<=i-1;j++)
			cout<<(char)(96+j)<<' ';
		for(j=i;j>=1;j--)
			cout<<(char)(96+j)<<' ';
		ch+=2;
		cout<<endl;
	}
}
else
	cout<<"Enter an Alphabet";
}


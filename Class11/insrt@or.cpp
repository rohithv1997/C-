#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
int a[100]={0}, n, i, data, pos;
cout<<"Insert Data at Suitable Position"<<endl;
cout<<"Enter n"<<endl;
cin>>n;
cout<<"Elements";
for(i=0;i<n;i++)
{	cin>>a[i];
	cout<<endl;
}
if(n-1>=100)
	exit(0);
else
{	cout<<"Enter Data"<<endl;
	cin>>data;
	for(i=0;i<n;i++)
	{	for(j=0;j<n-1-i;j++)
		{	if(a[j]>a[j+1])
			{	pos=a[j];
			a[j]=a[j+1];
			a[j+1]=pos;
			}
		}
	}
	pos=0;
	for(i=0;i<n;i++)
	{	if(a[i]<=data)
		{	pos=i;
			break;
		}
	}
	if(i==n && pos==0)
		pos=n;
	if(pos==n)
	{	a[pos]=data;
		++n;
	}
	else
	{	for(i=n-1;i>=pos;i--)
			a[i+1]=a[i];
		a[pos]=data;
		++n;
	}
}
clrscr();
for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}


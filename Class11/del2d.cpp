#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
char a[20][20], d[20];
int n=0, i, j,p=0;
cout<<"Delete Name in 2D array"<<endl;
cout<<"Enter no. of lines"<<endl;
cin>>n;
cout<<"Names"<<endl;
for(i=0;i<n;i++)
	gets(a[i]);
cout<<"Enter Name to be Deleted"<<endl;
gets(d);
for(i=0;i<n;i++)
{	if(strcmpi(a[i],d)==0)
	{  p=1;
		for(j=i;j<n;j++)
				strcpy(a[j+1],a[j]);
		n--;
	}
}
if(p)
{		for(i=0;i<n;i++)
	  {		puts(a[i]);
		 cout<<endl;
	  }
}
else
cout<<"Not Found";
}


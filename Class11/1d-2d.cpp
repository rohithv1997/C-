#include<iostream.h>
void main()
{
int a[20][20]={0}, b[20]={0}, i, j, n, k, tmp=0;
cout<<"Convert 1D Array to 2D Array"<<endl;
cout<<"Enter n";
cin>>n;
cout<<"Elements 1-digit"<<endl;
for(i=0;i<n;i++)
{	cin>>b[i];
	cout<<endl;
}
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		if(i+j+1==n)
		{	for(k=tmp;k<n;k++)
				a[k][j]=b[i];
			++tmp;
		}
for(i=0;i<n;i++)
{	for(j=0;j<n;j++)
		cout<<a[i][j]<<' ';
	cout<<endl;
}
}


#include<iostream.h>
void main()
{
int a[20][20], m, n, i, j, tmp, c;
cout<<"Swap Rows of Matrix"<<endl;
cout<<"Enter Rows";
cin>>m;
cout<<"Enter Columns";
cin>>n;
for(i=0;i<m;i++)
{	for(j=0;j<n;j++)
	{	cin>>a[i][j];
		cout<<' ';
	}
	cout<<endl;
}
cout<<"Matrix A";
for(i=0;i<m;i++)
{	for(j=0;j<n;j++)
		cout<<a[i][j]<<' ';
	cout<<endl;
}

if(m%2==0)
{	c=m/2;
	for(i=0;i<c;i++)
		for(j=0;j<n;j++)
		{	tmp=a[i][j];
			a[i][j]=a[i+c][j];
			a[i+c][j]=tmp;
		}
}
else
{	c=(m+1)/2;
	for(i=0;i<(m/2);i++)
		for(j=0;j<n;j++)
		{	tmp=a[i][j];
			a[i][j]=a[i+c][j];
			a[i+c][j]=tmp;
		}
}
cout<<"Row Swapped Matrix";
for(i=0;i<m;i++)
{	for(j=0;j,n;j++)
		cout<<a[i][j]<<' ';
	cout<<endl;
}
}














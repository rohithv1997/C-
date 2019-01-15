#include<iostream.h>
void main(()
{
int a[20][20], m, n, i, j, c=0;
cout<<"Alternate Elements in a Matrix"<<endl;
cout<<"Enter rows";
cin>>m;
cout<<"Enter Columns";
cin>>n;
for(i=0;i<m;i++)
{	for(j=0;j<n;j++)
		cin>>a[i][j];
	cout<<endl;
}
for(i=0;i<n;i++)
{	for(j=0;j<n;j++)
	{	++c;
		if(c%2!=0)
			cout<<a[i][j]<<' ';
	}
	cout<<endl;
}
}


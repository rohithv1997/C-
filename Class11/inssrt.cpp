#include<iostream.h>
#include<conio.h>
void main()
{
int Array[100], n, i, tmp, j;
cout<<"Insertion Sort"<<endl;
cout<<"Enter n";
cin>>n;
for(i=0;i<n;i++)
{	cout<<"Enter numbers";
	cin>>Array[i];
}
for(i=0;i<n;i++)
{	tmp=Array[i];
	j=i-1;
	while(Array[j]>tmp && j>=0)
	{	Array[j+1]=Array[j];
		j--;
	}
	Array[j+1]=tmp;
}
cout<<"Array is";
for(i=0;i<n;i++)
	cout<<Array[i]<<' ';
}


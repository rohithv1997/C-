#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int Array[100], n, i, j, pos, min, tmp;
cout<<"Selection Sort"<<endl;
cout<<"Enter n";
cin>>n;
for(i=0;i<n;i++)
	{	cout<<"Enter number";
		cin>>Array[i];
	}
for(i=0;i<n;i++)
	{	min=Array[i];
		pos=i;
		for(j=i+1;j<n;j++)
			 {	if(Array[j]<min)
					{	pos=j;
						min=Array[j];
					}
			 }
		tmp=Array[i];
		Array[i]=Array[pos];
		Array[pos]=tmp;
	}
cout<<"Array is"<<endl;
for(i=0;i<n;i++)
	cout<<Array[i]<<' ';
}


#include<iostream.h>
#include<conio.h>
void main()
{
int Array[100], n, i, j, tmp;
cout<<"Bubble Sort"<<endl;
cout<<"How Many?..";
cin>>n;
for(i=0;i<n;i++)
	{	cout<<endl<<"Enter number";
		cin>>Array[i];
	}
for(i=0;i<n;i++)
	{	for(j=0;j<n-1-i;j++)
		{	tmp=Array[j];
			Array[j]=Array[j+1];
			Array[j+1]=tmp;
		}
	}
for(i=0;i<n;i++)
	cout<<endl<<Array[i]<<' ';
getch();
}



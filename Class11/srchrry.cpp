#include<iostream.h>
#include<conio.h>
void main()
{
int Array[100], n, i, dat, pos=0;
cout<<"Linear Search"<<endl;
cout<<"How many?.."<<endl;
cin>>n;
for(i=0;i<n;i++)
	{	cout<<"Enter numbers";
		cin>>Array[i];
	}
cout<<"Search";
cin>>dat;
for(i=0;i<n;i++)
	{	if(dat==Array[i])
				{	cout<<"It is at"<<i+1<<"position";
					pos++;
					break;
             }
	}
if(i==n)
	cout<<"Not Found";
else
	cout<<"Found at "<<pos<<" places";

getch();
}


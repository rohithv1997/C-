#include<iostream.h>
void main()
{
int arr[100], n, i, sp=0, sn=0, s=0, j;
cout<<"No. of Positves, Negatives & Zeroes in Array"<<endl;
cout<<"Enter n"<<endl;
cin>>n;
cout<<"Enter data"<<endl;
for(i=0;i<n;i++)
{	cin>>arr[i];
	cout<<endl;
}
for(i=0;i<n;i++)
{	for(j=0;j<n;j++)
	{	if(arr[j]>arr[j+1])
		{	sn=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=sn;
		}
	}
}
sn=0;
for(i=0;i<n;i++)
{	if(arr[i]>0)
		++sp;
	else if(arr[i]==0)
		++s;
	else
		++sn;
}
cout<<sp<<"Positives"<<endl
	<<sn<<"Negatives"<<endl
	<<s<<"Zeroes";
}


#include<iostream.h>
void main()
{
int a[100], n, i, data, beg, mid, end;
cout<<"Binary Search"<<endl;
cout<<"Enter n";
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];
cout<<"Search";
cin>>data;
beg=0;
end=n-1;
mid=(beg+end)/2;
while(beg<=end)
{	if(a[mid]==data)
	{	cout<<"Found at"<<mid+1;
		break;
	}
	else if(a[mid]>data)
		end=mid-1;
	else
		beg=mid+1;
	mid=(beg+end)/2;
}
if(beg>end)
	cout<<"Not Found";
}


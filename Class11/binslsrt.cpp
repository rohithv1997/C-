#include<iostream.h>
void main()
{
int a[100], n, i, j, beg, mid, end, data, tmp;
cout<<"Binary Search an Selection Sort"<<endl;
cout<<"Enter n";
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];
for(i=0;i<n;i++)
{	beg=a[i];
	end=i;
	for(j=0;j<n;j++)
	{	if(a[j]<beg)
		{	end=j;
			beg=a[j];
		}
	}
	mid=a[i];
	a[i]=a[end];
	a[end]=mid;
}
beg=0;
end=0;
mid=0;
cout<<"Enter Data";
cin>>data;
beg=0;
end=n-1;
mid=(beg+mid)/2;
while(beg<=end)
{	if(a[mid]==data)
	{  tmp=mid+1;
		cout<<tmp<<"position";
		break;
	}
	else if(a[mid]>data)
		end=mid-1;
	else
		beg=mid+1;
	mid=(beg+end)/2;
}
}


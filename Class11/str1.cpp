#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<process.h>

struct item{	int itno, price;
					char desc[100];
				};
item details[100], tmp;


void output(int n1)
{	int i;
	for(i=0;i<n1;i++)
	{	cout<<endl<<endl<<endl<<"Item number = "<<details[i].itno;
		cout<<endl<<"Item Name : ";
		puts(details[i].desc);
		cout<<endl<<"Item Price = "<<details[i].price;
	}
	return;
}


void input()
{	int i, beg=0, end, mid, flag=0, n;
	cout<<endl<<"Enter no. of Items"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{	cout<<endl<<endl<<endl<<"Item number = "<<endl;
		cin>>details[i].itno;
		cout<<endl<<"Item Name : "<<endl;
		gets(details[i].desc);
		cout<<endl<<"Item Price = "<<endl;
		cin>>details[i].price;
	}
	cout<<endl<<endl<<"INSERT"<<endl;
	cout<<endl<<"Item number = "<<endl;
	cin>>tmp.itno;
	cout<<endl<<"Item Name : "<<endl;
	gets(tmp.desc);
	cout<<endl<<"Item Price = "<<endl;
	cin>>tmp.price;
	beg=0, end=n-1, mid=(beg+end)/2;
	while(beg<=end)
	{	if(details[mid].itno==tmp.itno)
		{	flag=1;
			break;
		}
		else if(details[mid].itno>tmp.itno)
			end=mid-1;
		else
			beg=mid+1;
		mid=(beg+end)/2;
	}
	if(flag==1)
	{	cout<<"Same Item number found !!"<<endl;
		exit(0);
	}
	if(beg>end)
	{	for(i=0;i<n;i++)
			if(tmp.itno<details[i].itno)
			{	mid=i;
				break;
			}
		for(i=n-1;i>=mid;i--)
			details[i+1]=details[i];
		details[mid]=tmp;
		output(n);
	}
	return;
}


void main()
{	input();
}

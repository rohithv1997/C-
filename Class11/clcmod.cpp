#include<iostream.h>
int calcmode(int a[], const int n)
{	int i, j, cm, count[100]={0}, k=0;
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
			if(a[i]==a[j])
				count[k]++;
		k++;
	}
	cm=count[0], j=0;
	for(i=0;i<n;i++)
	{	if(cm<count[i])
		{	cm=count[i];
			j=i;
		}
	}
	return a[j];
}


void main()
{	int a[100], n2, mode, i;
	cout<<"Enter n"<<endl;
	cin>>n2;
	for(i=0;i<n2;i++)
	{	cout<<"Enter a["<<i+1<<"]"<<endl;
		cin>>a[i];
	}
	mode=calcmode(a,n2);
	cout<<"Mode = "<<mode;
}

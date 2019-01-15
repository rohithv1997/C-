#include<iostream.h>

int a[100], b[100], c[100], na, nb;

void input()
{	int m, n, i;
	cout<<"Enter M (a)"<<endl;
	cin>>m;
	for(i=0;i<m;i++)
	{	cout<<"A["<<i<<"]"<<endl;
		cin>>a[i];
	}
	cout<<"Enter N (b)"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{	cout<<"B["<<i<<"]"<<endl;
		cin>>b[i];
	}
	m=::na;
	n=::nb;
	return;
}


void sort(int ma, int nb)
{	int i, j, tmp;
	for(i=0;i<ma;i++)
		for(j=i+1;j<ma;j++)
			if(a[j]>a[j+1])
			{	tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	for(i=0;i<nb;i++)
		for(j=i+1;j<nb;j++)
			if(b[j]<b[j+1])
			{	tmp=b[j];
				b[j]=b[j+1];
				b[j+1]=tmp;
			}
	return;
}

void mergsort(int na, int nb)
{	int i, pa=0, pb=0;
	for(i=0;i<na+nb;i++)
	{	if(pa==na)
		{	c[pa+pb]=b[nb-1-pb];
			++pb;
		}
		else if(pb==nb)
		{	c[pa+pb]=a[pa];
			++pa;
		}
		else
		{	if(a[pa]<b[nb-1-pb])
			{	c[pa+pb]=a[pa];
				++pa;
			}
			else
			{	c[pa+pb]=b[nb-1-pb];
				++pb;
			}
		}
	}
	return;
}

void output(int m, int n)
{	int i;
	cout<<endl<<endl<<"Array a"<<endl;
	for(i=0;i<m;i++)
		cout<<a[i]<<' ';
	cout<<endl<<endl<<"Array b"<<endl;
	for(i=0;i<n;i++)
		cout<<b[i]<<' ';
	cout<<endl<<endl<<"Array c"<<endl;
	for(i=0;i<m+n;i++)
		cout<<c[i]<<' ';
	return;
}

void main()
{	input();
	sort(::na,::nb);
	mergsort(::na,::nb);
	output(::na,::nb);
}



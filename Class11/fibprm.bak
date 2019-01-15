#include<iostream.h> 
#include<math.h>
void main()
{
double series(double,int);
double x;
int n;
cout<<"Sum of a series"<<endl<<"x^0-(x^2)/1+ (x^5)/1-(x^10)/2+(x^17)/3-(x^28)/5....till n"<<endl;
cout<<"Enter base"<<endl;
cin>>x;
cout<<"Enter no. of terms"<<endl;
cin>>n;
cout<<"Sum ="<<series(x,n);
}
double series (double x, int n)
{
double sum=0;
int	i, j=2, k, tmp=0, a=-1, b=1, c,l=0;
for(i=1;i<=n;i++)
{	c=a+b;
	a=b;
	b=c;
	if(i!=1)
	{	for(j;;j++)
			{	for(k=2;k<j;k++)
					if(k%j==0)
						break;
				if(k==j && l!=j)
					{ l=j;
					tmp+=k;
					break;
					}
			  }
		}
	if(i==1)
		sum+=1;
	else if(i%2==0)
		sum=sum-(pow(x, tmp)/c);
	else
		sum=sum+(pow(x, tmp)/c);
}
 return sum;
}


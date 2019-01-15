// 15. function overloading
#include<iostream.h>
#include<ctype.h>

int sum(int a[100], int n, char ch)
{  int total = 0;
   if(toupper(ch)=='E')
   {    for(int i=0;i<n;i++)
	   if(a[i]%2==0)
	       total += a[i];
   }
   else
   {    for(int i=0;i<n;i++)
	   if(a[i]%2==1)
	       total += a[i];
   }
   return total;
}

int sum(int a[100], int n)
{int i,total=0;
    for(i=0;i<n;i++)
	  total += a[i];
 return total;
}

void main()
{    int i,n,a[100];
     char ch,choice;
     cin>> n;
     for(i=0;i<n;i++)
	cin>>a[i];
     cout<<"For adding all numbers or some [1/2] ";
     cin>>choice;
     if(choice == '1')
	cout<<"Sum = "<<sum(a,n);
     else
     {   cout<<"Enter a character ";
	 cin>>ch;
	 cout<<"Sum = "<<sum(a,n);
     }
}

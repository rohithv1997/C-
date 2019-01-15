#include<iostream.h>
#include<string.h>
void main()
{
char a[50], s[10], tmp[20];
int n, i, j, pos=0, f=0;
cout<<"Search word in a text"<<endl;
cout<<"Enter text"<<endl;
cin.getline(a,50);
cout<<"Search"<<endl;
cin.getline(s,20);
n=strlen(a);
a[n]=' ';
n++;
for(i=0;i<n;i++)
{	for(j=0;a[i]!='\0'&& a[i]!=' ';j++, i++)
		tmp[j]=a[i] ;
	tmp[j]='\0';
	pos=i;
	if(a[i]==' ')
	{   if(strcmpi(s,tmp)==0)
		{  --pos;
			cout<<"Position no."<<pos<<endl;
			f=1;
		}
	}
	j=0;
}
if(i==n && f==0)
	cout<<"Not Found";
}


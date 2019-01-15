#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
char a[100],s[10],tmp[20];
int n, i, j, k=0, pos=0, f=0;
cout<<"Enter text"<<endl;
gets(a);
cout<<"Search"<<endl;
gets(s);
n=strlen(a);
strlwr(a);
strlwr(s);
for(i=0;i<n;i++,pos++)
{	for(j=0;a[j]!='\0' && a[j]!=' ';j++,i++,pos++)
		tmp[j]=a[i];
	tmp[j]='\0';
	if(strcmp(s,tmp)==0)
	{	cout<<"Position number"<<pos-j;
		f=1;
	}
}
if(f==0)
cout<<"Not Found";
}


#include<iostream.h>
#include<string.h>
void main()
{
char a[20], b[20];
cout<<"Concat 2 Strings"<<endl;
cout<<"Enter String 1 (max.20)"<<endl;
cin.getline(a,20);
cout<<"Enter String 2 (max.20)"<<endl;
cin.getline(b,20);
if(strlen(a)>strlen(b) || strlen(a)==strlen(b))
{	strcat(a,b);
	cout.write(a,strlen(a));
}
else
{	strcat(b,a);
	cout.write(b,strlen(b));
}
}



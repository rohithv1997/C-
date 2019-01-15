#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void  concat (int n,char a[30][100])
{	int i;
	char b[300]="\0";
	for(i=0;i<n;i++)
	{	strcat(b,a[i]);
   	strcat(b," ");
	}
	cout<<endl<<"String :"<<endl;
	puts(b);
}
void main()
{	int i=0;
	char ch, a[30][100];
	do
	{	cout<<endl<<"Word"<<endl;
		gets(a[i]);
		++i;
		cout<<endl<<"Choice"<<endl;
		cin>>ch;
		ch=tolower(ch);
		if(ch!='y')
			break;
	}while(ch=='y');
	concat(i,a);
	getch();
}

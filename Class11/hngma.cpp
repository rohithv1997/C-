#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
void main()
{
clrscr();
char plyr[20], tmp[20], inp, nat[10];
int n, i, count=0, lo=0, ch=7, totc=0, r, e=0, p, na;
cout<<"HANGMAN \n by ROHITH.V"<<endl<<"Enter Player's name "<<endl;
cin.getline(plyr,100);
cout<<endl<<"Enter his Nationality"<<endl;
cin.getline(nat,100);
n=strlen(plyr);
strupr(plyr);
strupr(nat);
for(i=0;i<n;i++)
{	if(plyr[i]==' ')
	  {	 plyr[i]='/';
		 tmp[i]='/';
		 e++;
	  }
}
r=strlen(nat);
for(i=0;i<n;i++)
{	if(tmp[i]!='/')
		tmp[i]='_';
}
clrscr();
for(i=0;i<n;i++)
	cout<<tmp[i]<<' ';
cout<<endl<<"Nationality  : ";
cout.write(nat,r);
cout<<endl<<"Chances Left : "<<ch;
p=n-e;
while(ch<=7 && ch>0 && totc<=p)
	{       count=0;
		cout<<endl<<"Guess.. "<<endl;
		cin>>inp;
		inp=toupper(inp);
		for(i=0;i<n;i++)
		{	if(inp==plyr[i])
			{	tmp[i]=inp;
				++count;
				++totc;
			}
		}
		if(i==n && count==0)
			++lo;
		for(i=0;i<n;i++)
			cout<<tmp[i]<<' ';
		ch=7-lo;
		cout<<endl<<"Chances left: "<<ch<<endl;
		if(!strcmpi(tmp,plyr))
			break;
		else
			continue;
	}
if(ch<=7 && ch>0 && strcmpi(tmp,plyr)==0)
{	cout<<endl<<"You  Won!!";
	cout<<endl<<"Answer is :";
	cout.write(plyr,n);
}
else if(totc<n && ch>=0 && strcmpi(tmp, plyr))
{	cout<<endl<<"You lost";
	cout<<endl<<"Answer is : ";
	cout.write(plyr,n);
}
getch();
}

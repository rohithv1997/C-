#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
cout<<" Check whether a Character is Vowel or Consonant"<<endl;
cout<<"Enter Character ";
cin>>ch;
if(isdigit(ch))
	cout<<ch<<"is a digit";
else if(isalpha(ch))
{	ch=tolower(ch);
	switch(ch)
	{	case'a':
		case'e':
		case'i':
		case'o':
		case'u':cout<<"Vowel";
					break;
		default:cout<<"Consonant";
	}
}
else
	cout<<"Special Character";
getch();
}


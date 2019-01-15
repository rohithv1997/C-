#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
void main()
{
char Array[100];
int n, i, count=0, v=0, n;
cout<<"Enter text";
cin.getline(Array, 100);
n=strlen(Array);
for(i=0;i<n;i++)
{	if(isalpha(Array[i])
	{	Array[i]=tolower(Array[i]);
		switch(Array[i])
		{	case 'a':
			case 'e':
			case 'i':
			case 'u':
			case 'o':count++;
						break;
			default:v++;



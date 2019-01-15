// 7. creating text file and displaying the content excluding the word 'The'
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

void main()
{   fstream f("info.txt",ios::in|ios::out);
    clrscr();
    if(f)
    {   char word[20];
	cout<<"End the paragraph with the word # ";
	do  { cin>>word;
	      f<<word<<" ";
	    }while(strcmp(word,"#"));
	f.clear();
	f.seekg(0);
	while(f>>word)
	{   if(strcmpi(word,"the")!=0)
		cout<<word<<" ";
	}
	f.close();
   }
   else
     cout<<"File not opened";
}

/* Sample I/O

End the paragraph with the word # creating a text file to display the contents o
f the same file excluding the word the. this is the program which i have got
#
creating a text file to display contents of same file excluding word the. this i
s program which i have got #      */


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

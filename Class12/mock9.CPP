//9.creating 2 text files to illustrate appending file contents
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

void main()
{   fstream f("file1.txt",ios::in|ios::out);
    fstream f1("file2.txt",ios::in|ios::out);

    clrscr();
    if(f)
    {   char word[20];
	cout<<"End the paragraph with the word # [File 1]";
	do  { cin>>word;
	      f<<word<<" ";
	    }while(strcmp(word,"#"));
	f.clear();
	f.seekg(0);
	cout<<"End the paragraph with the word # [File 2]";
	do  { cin>>word;
	      f1<<word<<" ";
	    }while(strcmp(word,"#"));
	f1.clear();
	f1.seekg(0,ios::end);
	while(f>>word)
	{   f1<<word<<" ";
	}
	f.close();

	f1.clear();
	f1.seekg(0);

	cout<<"Content of file 2 after appending...\n\n";
	while(f1>>word)
	{   cout<<word<<" ";
	}

	f1.close();

   }
   else
     cout<<"File not opened";
}

/* Sample I/O

End the paragraph with the word # [File 1]this is the content of file 1 #
End the paragraph with the word # [File 2]this is file 2 #                      
Content of file 2 after appending...                                            
                                                                                
this is file 2 # this is the content of file 1 #                                
                                                                                
 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

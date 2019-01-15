//9.creating a binary file and displaying records based on subject
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

 struct book { int bkid;
	   char bkname[50];
	   char author[40];
	   char subject[50];
	     }a;

void main()
{   fstream f("book.dat",ios::in|ios::out);

    clrscr();
    if(f)
    {    int i=1,flag=0;
	 char ch;
	 cout<<"Creating file ....Enter Records...\n";
	 do  {  cout<<"Enter Record "<<i++;
		cin>>a.bkid>>a.bkname>>a.author>>a.subject;
		f.write((char *)&a, sizeof(a));
		cout<<"Continue? [Y/N] :";
		cin>>ch;
	      }while(toupper(ch)=='Y');
	 char sub[50];
	 cout<<"Enter Subject ...";
	 cin>>sub;

	 f.clear();
	 f.seekg(0);

	 while(f.read((char *)&a,sizeof(a)))
	 {   if(strcmp(sub,a.subject)==0)
	     {
		cout<<a.bkid<<" "<<a.bkname<<" "<<a.author<<"\n";
		flag=1;
	      }
	  }

	  if(flag==0)
	     cout<<"No books found";

	  f.close();
     }
   else
     cout<<"File not opened";
}

/* Sample I/O

 Creating file ....Enter Records...
Enter Record 1                                                                  
1 c++ sumita cs                                                                 
Continue? [Y/N] :y                                                              
Enter Record 2                                                                  
2 circuits tenen physics                                                        
Continue? [Y/N] :y                                                              
Enter Record 3                                                                  
3 network schoo cs                                                              
Continue? [Y/N] :n                                                              
Enter Subject ...cs                                                             
1 c++ sumita
3 network schoo

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

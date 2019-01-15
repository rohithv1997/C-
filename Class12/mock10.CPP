//10.creating a binary file and displaying employee details
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

class emp { int empno;
	char name[50];
	long int salary;
   public: void read( ); // to read data of 1 employee
	void disp( ); // to display details of 1 employee
	long int ret( ){ return salary;}
       }a;
void emp::read()
{  cin>>empno>>name>>salary; }

void emp::disp()
{   cout<<empno<<"   "<<name<<"   "<<salary<<"\n";   }

void main()
{   fstream f("emp.dat",ios::in|ios::out);

    clrscr();
    if(f)
    {    int i=1,flag=0;
	 char ch;
	 cout<<"Creating file ....Enter Records...\n";
	 do  {  cout<<"Enter Record "<<i++;
		a.read();
		f.write((char *)&a, sizeof(a));
		cout<<"Continue? [Y/N] :";
		cin>>ch;
	      }while(toupper(ch)=='Y');

	 f.clear();
	 f.seekg(0);

	 while(f.read((char *)&a,sizeof(a)))
	 {   if(a.ret()>=20000 && a.ret() <= 50000)
	     {     a.disp();
		   flag=1;
	      }
	  }

	  if(flag==0)
	     cout<<"No employee found";

	  f.close();
     }
   else
     cout<<"File not opened";
}

/* Sample I/O
Creating file ....Enter Records...
Enter Record 1
1 dhana
40000
Continue? [Y/N] :y
Enter Record 2
2 pavithra
19000
Continue? [Y/N] :y
Enter Record 3
3 mani
55000
Continue? [Y/N] :n
1   dhana   40000

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

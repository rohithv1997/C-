#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
class student{		public:
				int rollno;
				char name[15], fname[15];
				void put();
				void get();
				void switchcase();
			 }s;

void student::put()
{	fstream file;
	cout<<endl<<"Enter Roll No.: "; cin>>rollno;
	cout<<"Enter Name: "; cin>>name;
	cout<<"Enter Father Name: "; cin>>fname;
	file.open("stu.dat",ios::out|ios::app);
	file.write((char *)this,sizeof(student));
	file.close();
	getch();
	switchcase();
}

void student::get()
{	int tmp;
	cout<<"\nEnter Roll No.: "; cin>>tmp;
	fstream file;
	file.open("stu.dat",ios::in);
	file.seekg(0,ios::beg);
	while(file.read((char *)this,sizeof(student)))
	{	if(rollno==tmp)
		{	cout<<"Roll No.: "<<rollno<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Father's Name: "<<fname<<endl<<endl;
		}
	}
	file.close();
	getch();
	switchcase();
}

void student::switchcase()
{	int ch;
	cout<<endl<<"1. Input\n2. Output\n3. Exit\nChoice? "; cin>>ch;
	switch(ch)
	{	case 1:s.put(); break;
		case 2:s.get(); break;
		case 3:exit(0); break;
		default:cout<<"Error!"<<endl; break;
	}
}

int main()
{	clrscr();
	s.switchcase();
	return 0;
}
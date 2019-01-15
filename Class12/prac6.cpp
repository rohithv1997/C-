#include<iostream.h>
#include<string.h>
#include<stdio.h>

/*Program #6:
To insert a student's detail by finding suitable position on basis of roll
number*/

int n, flag=0;

class student{	int rollno;
					char name[20];
					int claz;
					char sec;
					int dd, mm, yyyy;

					public:
					student();
					void indata();
					void outdata();
					void insert();
				 } list[10], tmp, tmp1;


student::student()
{	rollno=0;
	strcpy(name,"name");
	claz=0;
	sec='z';
	dd=0;
	mm=0;
	yyyy=0;
}


void student::indata()
{	cout<<"Enter Roll Number"<<endl;
	cin>>rollno;
	cout<<"Enter Name"<<endl;
	gets(name);
	cout<<"Enter Class"<<endl;
	cin>>claz;
	cout<<"Enter Section"<<endl;
	cin>>sec;
	cout<<"Enter Year of Birth"<<endl;
	cin>>yyyy;
	cout<<"Enter Month of Birth"<<endl;
	cin>>mm;
	cout<<"Enter Date of Birth"<<endl;
	cin>>dd;
}

void student::outdata()
{	cout<<"Roll Number : "<<rollno<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Class : "<<claz<<endl;
	cout<<"Section : "<<sec<<endl;
	cout<<"Date of Birth : "<<dd<<endl;
	cout<<"Month of Birth : "<<mm<<endl;
	cout<<"Year of Birth : "<<yyyy<<endl;
}

void student::insert()
{	int i, j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n-1;j++)
			if(list[j].rollno>list[j+1].rollno)
			{	tmp1=list[j];
				list[j]=list[n-1-i];
				list[n-1-i]= tmp1;
			}
	int f=0;
	for(i=0;i<n;i++)
		if(list[i].rollno>tmp.rollno)
		{	for(j=n-1;j>=i;j--)
				list[j+1]=list[j];
		  list[i]=tmp;
		  ++n, f=1;
		}
	if(f==0)
	{	list[n]=tmp;
		++n;
	}
}
void main()
{	cout<<"Enter Number of Students"<<endl;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{	list[i].indata();
		cout<<endl;
	}
	cout<<"Insert Data"<<endl;
	tmp.indata();
	list[0].insert();
	cout<<"Student List : "<<endl;
	for(i=0;i<n;i++)
	{	list[i].outdata();
		cout<<endl;
	}
}


/*
Sample I/O:
Enter Number of Students
5
Enter Roll Number
1234
Enter Name
rohith
Enter Class
12
Enter Section
a
Enter Year of Birth
1997
Enter Month of Birth
5
Enter Date of Birth
19

Enter Roll Number
2345
Enter Name
raghul
Enter Class
12
Enter Section
a
Enter Year of Birth
1000
Enter Month of Birth
1
Enter Date of Birth
1

Enter Roll Number
3456
Enter Name
abhishek
Enter Class
12
Enter Section
b
Enter Year of Birth
2000
Enter Month of Birth
2
Enter Date of Birth
2

Enter Roll Number
4567
Enter Name
hariprasad
Enter Class
12
Enter Section
a
Enter Year of Birth
1950
Enter Month of Birth
3
Enter Date of Birth
3

Enter Roll Number
5678
Enter Name
gautham raj
Enter Class
12
Enter Section
a
Enter Year of Birth
1975
Enter Month of Birth
6
Enter Date of Birth
6

Insert Data
Enter Roll Number
7896
Enter Name
neelesh
Enter Class
12
Enter Section
a
Enter Year of Birth
1990
Enter Month of Birth
5
Enter Date of Birth
26

===============================================================================

Student List:

Roll Number : 1234
Name : rohith
Class : 12
Section : a
Date of Birth : 19
Month of Birth : 5
Year of Birth : 1997

Roll Number : 2345
Name : raghul
Class : 12
Section : a
Date of Birth : 1
Month of Birth : 1
Year of Birth : 1000

Roll Number : 3456
Name : abhishek
Class : 12
Section : b
Date of Birth : 2
Month of Birth : 2
Year of Birth : 2000

Roll Number : 4567
Name : hariprasad
Class : 12
Section : a
Date of Birth : 3
Month of Birth : 3
Year of Birth : 1950

Roll Number : 5678
Name : gautham raj
Class : 12
Section : a
Date of Birth : 6
Month of Birth : 6
Year of Birth : 1975

Roll Number : 7896
Name : neelesh
Class : 12
Section : a
Date of Birth : 26
Month of Birth : 5
Year of Birth : 1990

*/

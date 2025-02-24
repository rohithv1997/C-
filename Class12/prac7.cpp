#include<iostream.h>
#include<string.h>
#include<stdio.h>

/*Program #7:
To delete a student's details by getting roll number of the student from user*/

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
					void deletion();
				 } list[10], tmp;


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

void student::deletion()
{	int tmp, flag=0, i, j;
	cout<<"Enter Roll Number to be deleted"<<endl;
	cin>>tmp;
	for(i=0;i<n;i++)
	{	if(tmp==list[i].rollno)
		{	for(j=i;j<n-1;j++)
				list[j]=list[j+1];
			--n;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"Roll Number not found";
}

void main()
{	cout<<"Enter Number of Students"<<endl;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{	list[i].indata();
		cout<<endl;
	}
	list[0].deletion();
	cout<<"Student List : "<<endl;
	for(i=0;i<n;i++)
	{	list[i].outdata();
		cout<<endl;
	}
}

/*
Sample Input/Output

Enter Number of Students
6
Enter Roll Number
1234
Enter Name
rohith venkat
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
shravan
Enter Class
12
Enter Section
a
Enter Year of Birth
1996
Enter Month of Birth
12
Enter Date of Birth
21

Enter Roll Number
3456
Enter Name
raghul
Enter Class
12
Enter Section
a
Enter Year of Birth
1997
Enter Month of Birth
2
Enter Date of Birth
14

Enter Roll Number
4567
Enter Name
abhishek
Enter Class
12
Enter Section
b
Enter Year of Birth
1996
Enter Month of Birth
11
Enter Date of Birth
11

Enter Roll Number
5678
Enter Name
sai bala
Enter Class
12
Enter Section
b
Enter Year of Birth
1996
Enter Month of Birth
8
Enter Date of Birth
15

Enter Roll Number
9634
Enter Name
pranav
Enter Class
12
Enter Section
b
Enter Year of Birth
1996
Enter Month of Birth
3
Enter Date of Birth
31

Enter Roll Number to be deleted
4567

================================================================================

Student List :
Roll Number : 1234
Name : rohith venkat
Class : 12
Section : a
Date of Birth : 19
Month of Birth : 5
Year of Birth : 1997

Roll Number : 2345
Name : shravan
Class : 12
Section : a
Date of Birth : 21
Month of Birth : 12
Year of Birth : 1996

Roll Number : 3456
Name : raghul
Class : 12
Section : a
Date of Birth : 14
Month of Birth : 2
Year of Birth : 1997

Roll Number : 5678
Name : sai bala
Class : 12
Section : b
Date of Birth : 15
Month of Birth : 8
Year of Birth : 1996

Roll Number : 9634
Name : pranav
Class : 12
Section : b
Date of Birth : 31
Month of Birth : 3
Year of Birth : 1996

*/

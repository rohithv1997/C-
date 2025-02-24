#include<iostream.h>
#include<string.h>
#include<stdio.h>

/*Program #8 :
To search a student's details by using binary search technique by accepting
name of student from user*/

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
					void search();
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

void student::search()
{	char tmp[20];
	student tmp1;
	int i, j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n-1-i;j++)
			if(strcmpi(list[j].name,list[j+i].name)>0)
			{	tmp1=list[j];
				list[j]=list[j+1];
				list[j+1]=tmp1;
			}
	cout<<"Enter Name to be Searched for:"<<endl;
	gets(tmp);
	int beg=0, end=n-1, mid=(beg+end)/2;
	while(beg<=end)
	{	if(strcmpi(list[mid].name,tmp)==0)
		{	list[mid].outdata();
			break;
		}
		else if(strcmpi(list[mid].name,tmp)<0)
			end=mid-1;
		else
			beg=mid+1;
		mid=(beg+end)/2;
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
	list[0].search();
}
/*
Sample Input/Output:
Enter Number of Students
6
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
1
Enter Date of Birth
1

Enter Roll Number
2345
Enter Name
shravan
Enter Class
12
Enter Section
a
Enter Year of Birth
1997
Enter Month of Birth
2
Enter Date of Birth
2

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
3
Enter Date of Birth
3

Enter Roll Number
4567
Enter Name
abhishek
Enter Class
12
Enter Section
b
Enter Year of Birth
1997
Enter Month of Birth
4
Enter Date of Birth
4

Enter Roll Number
5678
Enter Name
pranav
Enter Class
12
Enter Section
b
Enter Year of Birth
1997
Enter Month of Birth
5
Enter Date of Birth
5

Enter Roll Number
6789
Enter Name
james
Enter Class
12
Enter Section
b
Enter Year of Birth
1997
Enter Month of Birth
6
Enter Date of Birth
6

Enter Name to be Searched for:
abhishek

Roll Number : 4567
Name : abhishek
Class : 12
Section : b
Date of Birth : 4
Month of Birth : 4
Year of Birth : 1997
*/
#include<iostream.h>
#include<stdio.h>

//Program #3 :
/*To display highest scorer student's details using array of objects of structure
"stu"*/ 

struct student{	int rno, sub[5];
						char name[20];
						float  avg;
					}list[10];


int tot[10];


int highscore(int n)
{	int i, j, pos;
	for(i=0;i<n;i++)
	{  tot[i]=0;
		for(j=0;j<5;j++)
			tot[i]+=list[i].sub[j];
		list[i].avg=tot[i]/5.0;
	}
	j=tot[0], pos=0;
	for(i=0;i<n;i++)
		if(j<=tot[i])
		{	j=tot[i];
			pos=i;
		}
	return pos;
}


void main()
{	int i, j, n, p;
	float  t=0.0;
	cout<<"Enter Number of Students"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{	cout<<"Enter Name"<<endl;
		gets(list[i].name);
		cout<<"Enter Roll Number"<<endl;
		cin>>list[i].rno;
		cout<<"Enter Marks of 5 Subjects"<<endl;
		for(j=0;j<5;j++)
		{	cin>>list[i].sub[j];
			t+=list[i].sub[j];
		}
		list[i].avg=t;
		t=0.0;
	}
	cout<<"Highest Scorer Details"<<endl;
	p=highscore(n);
	cout<<"Name : "<<'\t';
	puts(list[p].name);
	cout<<endl<<"Roll Number : "<<'\t'<<list[p].rno;
	cout<<endl<<"Marks"<<'\t';
	for(j=0;j<5;j++)
		cout<<list[p].sub[j]<<endl;
	cout<<endl<<"Average"<<'\t'<<list[p].avg;

}


/* Sample I/O :

Enter Number of Students
3
Enter Name
rohith
Enter Roll Number
1
Enter Marks of 5 Subjects
100
100
100
100
100

===============================================================================

Enter Name
neelesh
Enter Roll Number
2
Enter Marks of 5 Subjects
99
99
99
99
99

===============================================================================

Enter Name
gautham
Enter Roll Number
3
Enter Marks of 5 Subjects
98
98
98
98
98
Highest Scorer Details
Name :  rohith

Roll Number :   1
Marks   100
100
100
100
100
*/

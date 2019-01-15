//11. Bubble sort
#include<iostream.h>

class student{ int rno;
		char nm[50];
		int tot_marks;
		public: void read();
			void disp();
			void bub_sort();
	      }e[10];
int n;
void student::read()
{  cin>>rno>>nm>>tot_marks;}
void student::disp()
{  cout<<rno<<" "<<nm<<" "<<tot_marks<<endl;  }

void student::bub_sort()
{ int i,j;
  student temp;
  for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
     if(e[j].tot_marks < e[j+1].tot_marks)
     {  temp =e[j+1];
	e[j+1]=e[j];
	e[j]=temp;
     }
}
void main()
{  int i;
   cin>>n;
   for(i=0;i<n;i++)
      e[i].read();
   e[0].bub_sort();
   for(i=0;i<n;i++)
      e[i].disp();
}

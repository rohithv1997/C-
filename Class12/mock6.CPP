//6. insertion sort
#include<iostream.h>

struct student{ int rno;
		char name[50];
		int average;
	      };

void ins_sort(student e[10], int n)
{ int i,j;
  student temp;
  for(i=1;i<n;i++)
  {  temp =e[i];
     j=i-1;
     while(temp.average>e[j].average && j>=0)
     { e[j+1]=e[j];
       j--;
     }
     e[j+1]=temp;
  }
}
void main()
{  int i,n;
   student s[10];
   cin>>n;
   for(i=0;i<n;i++)
   {   cin>>s[i].rno>>s[i].name>>s[i].average;}
   ins_sort(s,n);
   for(i=0;i<n;i++)
   {   cout<<s[i].rno<<" "<<s[i].name<<" "<<s[i].average<<endl;}
}

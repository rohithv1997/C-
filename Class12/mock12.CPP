// 12. Insertion
#include<iostream.h>

class book { int bkno;
	     char bkname[50];
	     char subject[50];
	     char author[50];
     public: void read_data( );
	     void disp_data( );
	     void insert( );
	   }a[10],s;

int n;
void book :: read_data()
{   cin>>bkno>>bkname>>subject>>author;}
void book::disp_data()
{   cout<<bkno<<" "<<bkname<<" "<<subject<<" "<<author<<endl;}
void book::insert()
{   int pos,i;
    cin>>pos;
    for(i=n-1;i>=pos-1;i--)
	    a[i+1]=a[i];
    a[pos-1] = s;
    n++;
}

void main()
{//int i;
  cin>>n;
  for(int i=0;i<n;i++)
      a[i].read_data();
  s.read_data();
  a[0].insert();
  for(i=0;i<n;i++)
      a[i].disp_data();
}
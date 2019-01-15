// 14. searching
#include<iostream.h>
#include<conio.h>

struct item { int itno;
	      char it_desc[20];
	      float price;
	    }it[10];

int n;

int search()
{   int itemno;
    cin>>itemno;
    for(int i=0;i<n;i++)
       if(itemno == it[i].itno)
	    return i;
    return -1;
}


void main()
{clrscr();
cin>>n;
for(int i=0;i<n;i++)
    cin>>it[i].itno>>it[i].it_desc>>it[i].price;
int n1 = search();
if(n1==-1)
   cout<<"Searched item is not found....";
else
{    cout<<"Found. Item Details are ...\n\n";
     cout<<it[n1].it_desc<<"   "<<it[n1].price;
}
}



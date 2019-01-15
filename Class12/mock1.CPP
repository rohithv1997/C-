#include<iostream.h>

class item { int itno;
char it_descrip[50];
float price;
int qty_sold_week;
public: void read( );
	void disp( );
	void choose( );
}it[10];
int n;
void item::read()
{ cin>>itno>>it_descrip>>price>>qty_sold_week;}
void item::disp()
{ cout<<itno<<" "<<it_descrip<<" "<<price<<" "<<qty_sold_week<<endl;}
void item::choose()
{ item max=it[0];
   int i;
   for(i=0;i<n;i++)
     if(max.qty_sold_week < it[i].qty_sold_week )
	max=it[i];
   for(i=0;i<n;i++)
      if(max.qty_sold_week == it[i].qty_sold_week)
	 it[i].disp();
}
void main()
{ cin>>n;
 for(int i=0;i<n;i++)
      it[i].read();
  it[0].choose();
}
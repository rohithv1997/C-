// 13. Inheritance
#include<iostream.h>
#include<conio.h>
#include<string.h>

class flight {    protected: char flight_desc[50];
			     char start[50];
			     char desti[50];
			     char fli_no[5];
			     int seat_avail, tot_seats;
	     };
       class query:protected flight
       {      public: void read_data( );
		      void disp_data( );
		      void search(char *, char *);
       }q[10];
int n;

void query :: read_data()
{ cin>>flight_desc>>start>>desti>>fli_no>>seat_avail>>tot_seats;}

void query :: disp_data()
{ cout<<flight_desc<<" "<<start<<" "<<desti<<" "<<fli_no;
cout<<seat_avail<<" "<<tot_seats<<endl;}

void query :: search(char *a, char *b)
{     for(int i=0;i<n;i++)
      if(strcmp(a,q[i].start) == 0 && strcmp(b,q[i].desti) == 0)
	    q[i].disp_data() ;
}

void main()
{  int i;
   cin>>n;
   for(i=0;i<n;i++)
      q[i].read_data();
   char beg[50],end[50];
   cin>>beg>>end;
   q[0].search(beg,end);
   getch();
}
#include<iostream.h>

/*
Program #20:
To swap 2 pointers allocated dynamically
*/


int *a=new int;
int *b=new int;
int *p=new int;
int *q=new int;
int *tmp=new int;

void swap(int*p, int*q)
{	if(p && q && tmp)
	{	*tmp=*p;
		*p=*q;
		*q=*tmp;
	}
	else
		cout<<"Error in creating memory"<<endl;
}


void main()
{  if(a && b)
	{	cout<<"Enter 2 Numbers"<<endl;
		cin>>*a>>*b;
		cout<<"Before Swapping"<<endl;
		cout<<"*a : \t"<<*a<<endl;
		cout<<"*b : \t"<<*b<<endl;
		swap(a,b);
		cout<<"After Swapping"<<endl;
		cout<<"*a : \t"<<*a<<endl;
		cout<<"*b : \t"<<*b<<endl;
	}
	else
		cout<<"Error in creating memory"<<endl;
	delete a;
	delete b;
	delete tmp;
	delete p;
	delete q;
}


/*Sample Input/Output:

Enter 2 Numbers
123
456
Before Swapping
*a :    123
*b :    456
After Swapping
*a :    456
*b :    123

*/

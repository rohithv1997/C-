#include<iostream.h>

/*Program #1 :
To Swap Upper Triangle Elements with Lower Triangle Elements of a Square Matrix
by passing 2-D integer array and its order as parameter to an User-Defined
function
*/


void swap(int a[20][20], int m)
{	int i, j, tmp;
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			if(i>j)
			{	tmp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=tmp;
			}
}


void main()
{	int m, a[20][20], i, j;
	cout<<"Enter Number of Rows(No.of rows = No. of columns)"<<endl;
	cin>>m;
	cout<<"Enter Elements"<<endl;
	for(i=0;i<m;i++)
	{	for(j=0;j<m;j++)
			cin>>a[i][j];
		cout<<endl;
	}
	cout<<"Before Swapping Upper and Lower Triangle"<<endl;
   for(i=0;i<m;i++)
	{	for(j=0;j<m;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
	swap(a,m);
	cout<<"After Swapping Upper and Lower Triangle"<<endl;
	for(i=0;i<m;i++)
	{	for(j=0;j<m;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
}


/*
Sample I\O :

Enter Number of Rows(No.of rows = No. of columns)
4
Enter Elements
1
2
3
4

56
7
89
10

11
12
13
14

15
16
17
18

Before Swapping Upper and Lower Triangle
1 2 3 4
56 7 89 10
11 12 13 14
15 16 17 18

After Swapping Upper and Lower Triangle
1 56 11 15
2 7 12 16
3 89 13 17
4 10 14 18

*/

#include<iostream.h>
/*
To Write 2 versions of matrix().
Version 1 accepts 2 matrices, their order and a character as parameter and
performs adding 2 matrices or subtracting 2nd matrix from 1st matrix.
Version 2 accepts 2 matrices and their order as parameters and multiplies them.
*/

int c[20][20];

void matrix(int a[20][20], int b[20][20],int m, int n,int p, int q, char ch)
{	int i, j;
	if(ch=='+')
		for(i=0;i<m;i++)
			for(j=0;j<q;j++)
				c[i][j]=a[i][j]+b[i][j];
	else if(ch=='-')
		for(i=0;i<p;i++)
			for(j=0;j<n;j++)
				c[i][j]=a[i][j]-b[i][j];
}


void matrix(int a[20][20],int b[20][20], int m, int n, int p, int q)
{	int i, j, k;
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
		{	c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
}


void main()
{	int i, m, n, p, q , a[20][20], b[20][20], j;
	cout<<"Enter Number of Rows and Columns for Matrix 1"<<endl;
	cin>>m>>n;
	cout<<"Enter Elements for Matrix 1"<<endl;
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
			cin>>a[i][j];
		cout<<endl;
	}
	cout<<"Enter Number of Rows and Columns for Matrix 2"<<endl;
	cin>>p>>q;
	cout<<"Enter Elements for Matrix 2"<<endl;
	for(i=0;i<p;i++)
	{	for(j=0;j<q;j++)
			cin>>b[i][j];
		cout<<endl;
	}
	cout<<"Matrix 1"<<endl;
   for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
	cout<<"Matrix 2"<<endl;
	for(i=0;i<p;i++)
	{	for(j=0;j<q;j++)
			cout<<b[i][j]<<' ';
		cout<<endl;
	}
	cout<<"Arithmetic Operation Menu"<<endl
	<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"Enter Choice"<<endl;
	cin>>i;
	if(i==1)
	{	if(m==p && n==q)
		{	matrix(a,b,m,n,p,q,'+');
			cout<<"Resultant Matrix"<<endl;
			for(i=0;i<m;i++)
			{	for(j=0;j<n;j++)
					cout<<c[i][j]<<' ';
				cout<<endl;
			}
		}
		else
			cout<<"Number of Rows or Columns of both matrices are unequal";
	}
	else if(i==2)
	{	if(m==p && n==q)
		{	matrix(a,b,m,n,p,q,'-');
			cout<<"Resultant Matrix"<<endl;
			for(i=0;i<m;i++)
			{	for(j=0;j<n;j++)
					cout<<c[i][j]<<' ';
				cout<<endl;
			}
		}
		else
			cout<<"Number of Rows or Columns of both matrices are unequal";
	}
	else if(i==3)
	{	if(n==p)
		{	matrix(a,b,m,n,p,q);
			cout<<"Resultant Matrix"<<endl;
			for(i=0;i<m;i++)
			{	for(j=0;j<q;j++)
					cout<<c[i][j]<<' ';
				cout<<endl;
			}
		}
		else
			cout<<"Number of Rows in Matrix 2 and Columns in Matrix 1 are unequal";
	}
	else
		cout<<"Wrong Choice";
}


/* Sample I/O:

Addition:
Enter Number of Rows and Columns for Matrix 1
2
3
Enter Elements for Matrix 1
1
2
3

4
5
6

Enter Number of Rows and Columns for Matrix 2
2
3
Enter Elements for Matrix 2
1
2
34

5
6
7

Matrix 1
1 2 3
4 5 6
Matrix 2
1 2 34
5 6 7
Arithmetic Operation Menu
1.Addition
2.Subtraction
3.Multiplication
Enter Choice
1
Resultant Matrix
2 4 37
9 11 13

================================================================================

Subtraction:
Enter Number of Rows and Columns for Matrix 1
2
2
Enter Elements for Matrix 1
1
2

3
4

Enter Number of Rows and Columns for Matrix 2
2
2
Enter Elements for Matrix 2
5
6

7
8

Matrix 1
1 2
3 4
Matrix 2
5 6
7 8
Arithmetic Operation Menu
1.Addition
2.Subtraction
3.Multiplication
Enter Choice
2
Resultant Matrix
-4 -4
-4 -4

================================================================================

Multiplication:
Enter Number of Rows and Columns for Matrix 1
2
2
Enter Elements for Matrix 1
1
2

34
576

Enter Number of Rows and Columns for Matrix 2
2
3
Enter Elements for Matrix 2
1
2
3

5
6
6

Matrix 1
1 2
34 576
Matrix 2
1 2 3
5 6 6
Arithmetic Operation Menu
1.Addition
2.Subtraction
3.Multiplication
Enter Choice
3
Resultant Matrix
11 14 15
2914 3524 3558
 */




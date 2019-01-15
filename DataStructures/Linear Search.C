#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,d,f=0;
clrscr();
printf("enter no of elements");
 scanf("%d",&n);

printf("enter elements");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("enter the element to be found\n");
scanf("%d",&d);
for(i=0;i<n;i++)
if(a[i]==n)
 {printf("the element is found in %d index\n",i+1);
	f=1;
}
if(f==0) 
 printf("the element is not found);
 

  getch();


 }
  

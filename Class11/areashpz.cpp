#include<iostream.h>
#include<conio.h>
void main()
{
int n;
 long double a, b;
cout<<"Area of Shapes"<<endl;
cout<<"Shape Menu : \n 1.Square \n 2.Circle \n 3.Equilateral Triangle \a";
do{
	cout<<endl<<"Enter choice";
	cin>>n;
	n!=1&&n!=2&&n!=3?cout<<"Wrong choice.."<<endl: cout<<' ';
	if(n>=4)
	{	cout<<"Aborting...";
		break;
		}
	n==1||n==2||n==3?cout<<"Enter Side": cout<<' ';
	n==1||n==2||n==3?cin>>a:cin>>b;
	n==1?cout<<a*a<<"sq. units":cout<<' ';
	n==2?cout<<22/7*a*a<<"sq. units":cout<<' ';
	n==3?cout<<0.866*a*a<<"sq. units":cout<<' ';
	}while(n<4);
getch();
}
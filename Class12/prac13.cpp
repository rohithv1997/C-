#include<fstream.h>
#include<stdio.h>
#include<string.h>
/*Program#13:
To update "itemmast.dat" by comparing data stored in "purchase.dat"*/
class item{	protected:
				int itno;
				char name[20];
				int qoh;
				float unpr;

				public:
				item();
				void indata();
				void outdata();
				char* retname();
			 };

item list1, list2;


item::item()
{	itno=0;
	strcpy(name,"No Name");
	qoh=0;
	unpr=0.0;
}


void item::indata()
{  cout<<endl<<endl;
	cout<<"Enter Item Number"<<endl;
	cin>>itno;
	cout<<"Enter Item Name"<<endl;
	gets(name);
	cout<<"Enter Quantity On Hand"<<endl;
	cin>>qoh;
	cout<<"Enter Unit Price"<<endl;
	cin>>unpr;
}


void item::outdata()
{  cout<<endl<<endl;
	cout<<"Item Number : "<<'\t'<<itno<<endl;
	cout<<"Item Name : "<<'\t'<<name<<endl;
	cout<<"Quantity On Hand : "<<'\t'<<qoh<<endl;
	cout<<"Unit Price : "<<'\t'<<unpr<<endl;
}

char* item::retname()
{return name;}

void main()
{  int flag=0;
	ifstream file1("itemmast.dat",ios::in);
	ifstream file2("purchase.dat",ios::in);
	ofstream tmp1("tmp.dat",ios::out);
	if(file1 && file2 && tmp1)
	{	while(file1.read((char*)&list1,sizeof(list1)))
		{  while(file2.read((char*)&list2,sizeof(list2)))
			{		if(strcmpi(list1.retname(),list2.retname())==0)
					{	tmp1.write((char*)&list2,sizeof(list2));
						flag=1;
					}
			}
			if(flag==0 && file2.eof()==1)
				tmp1.write((char*)&list1,sizeof(list1));
			file2.clear();
			file2.seekg(0,ios::beg);
			flag=0;
		}
		cout<<"File Created"<<endl;
		file1.close();
		file2.close();
		tmp1.close();
		ifstream file3("itemmast.dat",ios::in);
		ifstream file4("purchase.dat",ios::in);
		ifstream fil("tmp.dat",ios::in);
		if(file3 && file4 && fil)
		{  cout<<endl<<"itemmast.dat";
			while(file3.read((char*)&list1,sizeof(list1)))
				list1.outdata();
			cout<<endl<<"purchase.dat";
			while(file4.read((char*)&list1,sizeof(list1)))
				list1.outdata();
			cout<<endl<<"tmp.dat";
			while(fil.read((char*)&list1,sizeof(list1)))
				list1.outdata();
			fil.close();
			file3.close();
			file4.close();
			cout<<endl<<endl;
			if(remove("itemmast.dat")==0)
				cout<<"Old File Deleted"<<endl;
			if(rename("tmp.dat","itemmast.dat")==0)
				cout<<"File Updated"<<endl;
			ifstream file5("itemmast.dat",ios::in);
			cout<<endl<<"Updated itemmast.dat";
			while(file5.read((char*)&list2,sizeof(list2)))
				list2.outdata();
		  file5.close();
		}
		else
			cout<<"Error in output"<<endl;
	}
	else
	cout<<"Error in input"<<endl;
}

/*Sample Input/Output:
File Created

itemmast.dat

Item Number :   1234
Item Name :     rice
Quantity On Hand :      456
Unit Price :    96.31


Item Number :   2345
Item Name :     wheat
Quantity On Hand :      456
Unit Price :    54.32

purchase.dat

Item Number :   1234
Item Name :     rice
Quantity On Hand :      456
Unit Price :    96.31


Item Number :   4567
Item Name :     oil
Quantity On Hand :      567
Unit Price :    12.45

tmp.dat

Item Number :   1234
Item Name :     rice
Quantity On Hand :      456
Unit Price :    96.31


Item Number :   2345
Item Name :     wheat
Quantity On Hand :      456
Unit Price :    54.32


Item Number :   4567
Item Name :     oil
Quantity On Hand :      567
Unit Price :    12.45


Old File Deleted
File Updated

Updated itemmast.dat

Item Number :   1234
Item Name :     rice
Quantity On Hand :      456
Unit Price :    96.31


Item Number :   2345
Item Name :     wheat
Quantity On Hand :      456
Unit Price :    54.32


Item Number :   4567
Item Name :     oil
Quantity On Hand :      567
Unit Price :    12.45
*/

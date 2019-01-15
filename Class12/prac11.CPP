#include<fstream.h>
#include<string.h>
/*Program #11:
	To reverse each word in a text file and write it in a new file*/

void main()
{	char word[20];
	ifstream fin("old.txt");
	ofstream fout("new.txt");
	if(fin && fout)
	{	while(fin>>word)
			fout<<strrev(word)<<' ';
		cout<<"new.txt Created"<<endl;
		fin.close();
		fout.close();
	}
	else
		cout<<"Error in opening any one of the 2 files"<<endl;
	ifstream file1("old.txt");
	ifstream file2("new.txt");
	if(file1 && file2)
	{	cout<<endl<<"old.txt contains"<<endl;
		while(file1>>word)
			cout<<word<<' ';
		cout<<endl<<"new.txt contains"<<endl;
		while(file2>>word)
			cout<<word<<' ';
		file1.close();
		file2.close();
	}
	else
		cout<<"error";
}

/*Sample Input/Output:

new.txt Created

old.txt contains
MICROSOFT SOFTWARE LICENSE TERMS WINDOWS 7 ULTIMATE

new.txt contains
TFOSORCIM ERAWTFOS ESNECIL SMRET SWODNIW 7 ETAMITLU

*/
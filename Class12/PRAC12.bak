#include<fstream.h>
#include<string.h>

/*Program #12:
To check whether 2 text files are identical or not.*/

void main()
{	char word1[20], word2[20];
	int flag=1;
	ifstream f1("f1.txt");
	ifstream f2("f2.txt");
	while(f1>>word1 && f2>>word2)
	{	if(strcmp(word1,word2)!=0)
			flag=0;
	}
	if(flag)
		cout<<"Files are identical"<<endl;
	else
		cout<<"Files are not identical"<<endl;
	f1.clear();
	f2.clear();
	f1.seekg(0);
	f2.seekg(0);
	cout<<endl<<"f1.txt contains"<<endl;
	while(f1>>word1)
		cout<<word1<<' ';
	cout<<endl<<"f2.txt contains"<<endl;
	while(f2>>word2)
		cout<<word2<<' ';
	f1.close();
	f2.close();
}

/*Sample Input/Output:

Files are identical

f1.txt contains
By using the software, you accept these terms. If you do not accept them, do not
use the software.

f2.txt contains
By using the software, you accept these terms. If you do not accept them, do not
use the software.
*/

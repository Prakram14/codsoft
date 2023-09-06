#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char fileName[15],str[50];
	int count=0;
	cout<<"Enter file name: ";
	cin>>fileName;
	ifstream ifile;
	ifile.open(fileName,ios::in);
	if(!ifile)
	{
		cout<<fileName<<"file doesn't exist";
		exit(0);
	}
	while(!ifile.eof())
	{
		ifile>>str;
		count++;
	}
	cout<<count;
	ifile.close();
	return 0;
}

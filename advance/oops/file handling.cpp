//file handling

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream filestream("testout.txt");
	if(filestream.is_open())
	{
		filestream<<"welcome to javatpoint\n";
		filestream<<"c++ tutorial\n";
		filestream.close();
	}
	else
	cout<<"file opening is fail\n";
	
	string srg;
	ifstream fs("testout.txt");
	if(fs.is_open())
	{
		while(getline (fs,srg))
		{
			cout<<srg<<endl;
		}
		fs.close();
	}
	else
	{
		cout<<"file opening is fail"<<endl;
	}
}

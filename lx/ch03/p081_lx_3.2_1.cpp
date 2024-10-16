//从cin中获取一行getline(cin,line)
//从cin中获取单独一个单词cout<<line<<endl
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string line;
	while(getline(cin,line))
		cout<<line<<endl;	
	return 0;
}

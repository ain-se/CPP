#include <cctype>
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string str("hello,world");
	for(auto &c:str)
		c=toupper(c);
	cout<<str<<endl;
	return 0;
}

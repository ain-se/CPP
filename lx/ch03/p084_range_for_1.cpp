#include <cctype>
#include<iostream>
#include<string>                      
using std::string;
using std::cin;
using std::cout;                    
using std::endl;
int main()
{
	string s("some string");
	if(!s.empty())
		s[0]=toupper(s[0]);
	cout<<s<<endl;
}

#include <cctype>
#include<iostream>
#include<string>       
using std::string;
using std::cout;  
using std::endl;
int main()
{
	string s("some string");
	for(decltype(s.size()) i=0;i!=s.size()&&!isspace(s[i]);++i)
		s[i]=toupper(s[i]);
	cout<<s<<endl;
	return 0;
}

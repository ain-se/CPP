/*输入字符串,用范围for把里面的字符替换成X*/
#include<iostream>
#include<string> 
using std::string;
using std::cin;
using std::cout;  
using std::endl;
int main()
{
	string s;
	cin>>s;
	for(auto &c:s)
		c='X';
	cout<<s<<endl;
	return 0;
}

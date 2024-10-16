/*创建一个字符串,并剔除里面的标点符号ispunct*/
#include<cctype>
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main()
{
	string s;
	cin>>s;
	string r;//最好还是创建一个副本吧
	for(auto &c:s)
		if(!ispunct(c))
			r+=c;
	cout<<r<<endl;
	return 0;
}

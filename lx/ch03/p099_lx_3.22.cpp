#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::toupper;
using std::isalpha;
int main()
{
	vector<string> text;
	text.push_back("aaaaaaaaaa aaaaaaaaa aaaaaa");
	text.push_back(" ");
	text.push_back("bbbbbbbbbbbbbb bbbbbbbbbbb bbbbbbbbbbbbb");
	for(auto it=text.begin();it!=text.end()&&!it->empty();++it)
		for(auto &c:*it)
			if(isalpha(c))
				c=toupper(c);
	for(auto it:text)
		cout<<it<<endl;
	return 0;
}

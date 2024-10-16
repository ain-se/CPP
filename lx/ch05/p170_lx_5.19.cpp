#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::endl;
using std::cout;
int main()
{
	string s1,s2;
	do
	{
		cin>>s1>>s2;
		if(s1.size()!=s2.size())
			s1.size()<s2.size()?cout<<s1<<endl:cout<<s2<<endl;
		else
			cout<<"String are equal"<<endl;
	}while(true);
	return 0;
}

#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string str1,str2;
	while(true)
	{
		cin>>str1>>str2;
		if(str1.size()!=str2.size())
		{
			string str=str1.size()>str2.size()?str1:str2;
			cout<<str<<endl;
		}
		else
			cout<<"两字符串长度相同"<<endl;
	}
	return 0;
}

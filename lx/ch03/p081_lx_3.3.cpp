//2个string是否相同,不同就输出大的那一个
#include<iostream>
#include <string>
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
		if(str1!=str2)
		{
			string str=str1>str2?str1:str2;
			cout<<str<<endl;
		}
		else
		{
			cout<<"两字符串相同"<<endl;
		}
	}
	return 0;
}

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
		getline(cin,str2);
		if(str2.empty())
			break;
		str1+=str2;
	}
	cout<<str1<<endl;
	return 0;
}

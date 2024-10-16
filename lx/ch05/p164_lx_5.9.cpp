#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::cin;
int main()
{
	vector<char> ch={'a','e','i','o','u'};
	string str;
	while(getline(cin,str)&&!str.empty())
	{
		for(char c:str)
		{
			bool isvowel=false;
			for(char vowel:ch)
				if(c==vowel)
				{
					isvowel=true;
					break;
				}
			if(!isvowel)
				cout<<c;
		}
		cout<<endl;
	}
	return 0;
}

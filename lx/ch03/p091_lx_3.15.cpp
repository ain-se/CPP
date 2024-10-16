#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	vector<string> v;
	string val;
	while(getline(cin,val)&&!val.empty())
		v.push_back(val);
	for(auto &i:v)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}

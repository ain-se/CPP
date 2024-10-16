#include <ostream>
#include<vector>
#include<iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	vector<int> num;
	int i;//必要的
	while(cin>>i)
		num.push_back(i);
	for(auto val:num)
		cout<<val<<" ";
	cout<<endl;
	return 0;
}

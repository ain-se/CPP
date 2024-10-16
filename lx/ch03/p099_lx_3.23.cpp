#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
int main()
{
	vector<int> n={10,9,8,7,6,5,4,3,2,1};
	for(auto it=n.begin();it!=n.end();++it)
		*it*=2;
	for(const auto &val:n)
		cout<<val<<"\n";
	cout<<endl;
	return 0;
}

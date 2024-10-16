#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::count;
int main()
{
	vector<int> v={1,2,3,4,5,6,6,6,2};
	cout<<count(v.cbegin(),v.cend(),6)<<endl;
	return 0;
}

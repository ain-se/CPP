#include<algorithm>
#include<iostream>
#include <numeric>
#include<vector>
using std::find;
using std::cout;
using std::vector;
using std::endl;
using std::accumulate;
int main()
{
	vector<int> vec={41,42,43,44};
	int val=42;
	auto result=find(vec.cbegin(),vec.cend(),val);
	cout<<"The value "<<val<<(result==vec.cend()?" is not present":" is present")<<endl;
	int sum=accumulate(vec.cbegin(),vec.cend(),0);
	cout<<sum<<endl;
	return 0;
}

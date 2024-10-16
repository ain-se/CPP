#include<iostream>
#include<vector>
using std::cin;
using std::vector;
using std::endl;
using std::cout;
int main()
{
	vector<int> num={0,1,2,3,4,5,6,7,8,9};
	for(auto it=num.begin();it!=num.end();++it)
		*it=(*it%2!=0)?(*it*2):(*it);
	for(auto i:num)
		cout<<i<<endl;
	return 0;
}

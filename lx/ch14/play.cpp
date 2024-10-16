#include<functional>
#include<iostream>
#include<vector>
#include<numeric>
using std::vector;
using std::cout;
using std::endl;
using std::plus;
using std::accumulate;
int main()
{
	vector<int> numbers={1,2,3,4,5};
	int sum=0;
	sum=accumulate(numbers.begin(),numbers.end(),0,plus<int>());
	cout<<"Sum of all elements:"<<sum<<endl;
	return 0;
}

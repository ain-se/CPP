#include<iostream>
using std::cin;
using std::cout;
using std::endl;
long long fun(int n)
{
	if(n==0)
		return 1;
	else
		return n*fun(n-1);
}
int main()
{
	int a;
	cin>>a;
	if(a<0)
		cout<<"输入错误"<<endl;
	else
	{
		long long s=fun(a);
		cout<<s<<endl;
	}
	return 0;
}

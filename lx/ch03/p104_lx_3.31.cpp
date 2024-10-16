#include<iostream>
using std::cout;
using std::endl;
int main()
{
	int sun[10]={0};
	for(auto &val:sun)//引用,相当于sun[val]
		val=&val-sun;//取地址
	for(int i=0;i<10;i++)
		cout<<"sun["<<i<<"]="<<sun[i]<<endl;
	return 0;
}

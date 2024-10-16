#include<iostream>
using std::cout;
using std::endl;
class X;//循环依赖时的无奈之举
class Y
{
	X &xRef;
	public:
	Y(X &x):xRef(x){}//:后面是构造函数的初始化列表
	void displayY()
	{
		cout<<"Displaying Y"<<endl;
	}
};
class X
{
	Y *yPtr;
	public:
	X():yPtr(new Y(*this)){}
	~X(){delete yPtr;}
	void displayX()
	{
		cout<<"Displaying X"<<endl;
		yPtr->displayY();
	}
};
int main()
{
	X x;
	x.displayX();
	return 0;
}

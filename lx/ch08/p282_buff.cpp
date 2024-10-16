#include<iostream>
using std::cout;
using std::ends;
using std::endl;
using std::flush;
int main()
{
	cout<<"endl:hi!"<<endl;//输出\n,刷新缓冲区
	cout<<"flush:hi!"<<flush;//只刷新,不干任何事
	cout<<"ends:hi!"<<ends;//输出\0,刷新缓冲区
	return 0;
}

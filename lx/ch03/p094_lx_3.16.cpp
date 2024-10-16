//v1,v2(10),v3(10,43),v4{10},v5{10,43},string v6{10},v7{10,"hi"}
#include<iostream>
#include <ostream>
#include<string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::endl;
int main()
{
	vector<int> v1,v2(10),v3(10,43),v4{10},v5{10,43};
	vector<string> v6{10},v7{10,"hi"};
	cout<<"v1:"<<v1.size()<<"\n"<<"v2:"<<v2.size()<<"\n"<<"v3:"<<v3.size()<<"\n"<<"v4:"<<v4.size()<<"\n"<<"v5:"<<v5.size()<<"\n"<<"v6:"<<v6.size()<<"\n"<<"v7:"<<v7.size()<<endl;
	return 0;
}

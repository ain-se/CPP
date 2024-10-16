#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::endl;
int main()
{
	vector<int> v1,v2(10),v3(10,42),v4{10},v5{10,42};
	vector<string> v6(10),v7(10,"hi");
	vector<vector<int>> iv={v1,v2,v3,v4,v5};
	vector<vector<string>> sv={v6,v7};
	cout << "         size         elements"<<endl;
	for(auto it=iv.begin();it!=iv.end();++it)
	{
		cout<<"v"<<(it-iv.begin()+1)<<"      "<<it->size()<<"                  {";
		for(size_t j=0;j<it->size();++j)
		{
			if(j>0)
				cout<<",";
			cout<<(*it)[j];
		}
		cout<<"}"<<endl;
	}
	for(auto it=sv.begin();it!=sv.end();++it)
	{
		cout<<"v"<<(it-sv.begin()+6)<<"      "<<it->size()<<"                  {";
		for(size_t j=0;j<it->size();++j)
		{
			if(j>0)
				cout<<",";
			cout<<"\""<<it->at(j)<<"\"";
		}
		cout<<"}"<<endl;
	}
}

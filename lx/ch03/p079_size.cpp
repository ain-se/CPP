#include<iostream>
#include <ostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string line;
	while(getline(cin,line))
		if(line.size()<8)
			cout<<line<<endl;
	return 0;
}

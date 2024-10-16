#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int i=0,sum=0;
	while(cin>>i)
	{
		sum+=i;
		if(i==42)
			break;
	}
	cout<<sum<<endl;
	return 0;
}

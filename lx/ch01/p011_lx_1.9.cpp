#include<iostream>
int main()
{
	int sum=0,val=50;
	while(val<101)
	{
		sum+=val;
		++val;
	}
	std::cout<<"sum="<<sum<<std::endl;
	return 0;
}

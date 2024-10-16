#include<iostream>
int reused=42;
int main()
{
	int unique=0;
	std::cout<<reused<<" "<<unique<<std::endl;
	int reused=0;
	std::cout<<reused<<" "<<unique<<std::endl;
	if(unique==0)
	{
		int reused=8;
		std::cout<<reused<<" "<<unique<<std::endl;
		std::cout<<::reused<<" "<<unique<<std::endl;//::指向全局变量
	}
	return 0;
}

//读取一大一小两个整数，打印其中整数，前者必须比后者小，如否则先交换，在打印
#include<iostream>
int main()
{
	int a,b,t;
	std::cin>>a>>b;
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	int i=a;
	while(i<=b)
	{
		std::cout<<i<<"\t"<<std::endl;
		i++;
	}
	return 0;
}

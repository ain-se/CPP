#include<iostream>
#include"header/Sales_item.h"
int main()
{
	Sales_item item1,item2;
	if(std::cin>>item1)
	{
		int cnt=1;
		while(std::cin>>item2)
		{
			if(item2.isbn()==item1.isbn())
				++cnt;
			else
			{
				std::cout<<item1<<" occurs "<<cnt<<" times"<<std::endl;
				item1=item2;
				cnt=1;
			}
		}
		std::cout<<item1<<" occurs "<<cnt<<" times"<<std::endl;
	}
	return 0;
}

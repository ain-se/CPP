//处理相同编号的书籍,并输出其总和
#include<iostream>
#include"header/Sales_item.h"
int main()
{
	Sales_item total;
	if(std::cin>>total)
	{
		Sales_item trans;
		while(std::cin>>trans)
			if(total.isbn()==trans.isbn())
				total+=trans;
			else
			{
				std::cout<<total<<std::endl;
				total=trans;
			}
		std::cout<<total<<std::endl;
	}
	else
	{
		std::cerr<<"NO, data?"<<std::endl;
		return -1;
	}
	return 0;
}

#include<iostream>
#include<istream>
#include<string>
#include<fstream>
using std::cerr;
using std::endl;
using std::istream;
using std::string;
using std::cout;
using std::ifstream;
istream &func(istream &is)
{
    string buf;
    // 使用istream提取操作符读取流，直到遇到EOF
    while(is>>buf)
	{
        cout<<buf<<endl;
    }
    // 清除istream的错误状态标志
    is.clear();
    // 如果需要，可以设置流的失败位，以指示已经到达文件末尾
    if(is.eof())
	{
        is.setstate(std::ios::eofbit);
    }
    // 返回istream引用
    return is;
}
int main()
{
    // 假设有一个名为example.txt的文件
    ifstream file("example.txt");
    if(file)
	{
        // 调用func函数处理文件流
        func(file);
    }
	else 
	{
        cerr<<"Unable to open file."<<endl;
    }
    // 关闭文件流
    file.close();
    return 0;
}

string s1;
s1是个空串

string s2(s1);
s2是s1的副本

string s2=s1;
等价于s2(s1)

string s3("hello");
s3是字面值hello的副本

string s3="hello";
等价于s3("hello")

string s4(n,'v');
n是int类型,表示把s4初始化由n个v组成的字符串

使用=的是拷贝初始化,不使用的是直接初始化

os<<s
将s写入输出流os中,并返回os
os可以是任何流

is>>s
同上,只不过一个输出一个输入

getline(is,s)
从is中读取1行到s字符串里

s.empty()
检测s字符串是否为空,为空返回ture,不为返回false

s.size()
返回字符串里字符数量

s[n]
字符串下标为n的字符,n从0开始

s1+s2
拼接字符串

s1==s2
s1!=s2
判断s1与s2是否完全相同,c++大小写敏感

<,>,<=,>=
利用acsii码表排序a<b

std::size_type
表示容器大小和索引

使用vector必须要有#include<vector>头文件
using std::vector;也带上这句

vector<T> v1;
T是动态数组的类型v1是动态数组名,这玩意儿是默认初始化

vector<T> v2(v1);
v2中包含v1的副本

vector<T> v2=v1;
同上

vector<T> v3(n,val);
v3里包含n个数量的val,(val可以是0,a...)

vector<T> v4(n);
v4包含n个默认初始化元素

vector<T> v5{a,b,c,…}
列表初始化

vector<T> v5={a,b,c,…}
同上

vector<T> v;
v.push_back(i);
把i里面的内容从屁股后面怼进去

vector只能用while输入

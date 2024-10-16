声明一个迭代器，用于遍历 m
vector<int> m;
vector<int>::iterator it; 

访问开头与结尾
it=m.begin();
auto end_it=m.end();

总结:
iterator就两个玩意begin与end
begin:开头
end:结尾
就他妈的傻逼循环

it+n
迭代器it往后移n位

it-n
迭代器it往前移n位

it+=n
将迭代器往后移n位,并将it初始为此位置的地址

it-=n
与it+=n相反,不过都是将it重新初始

it1-it2
它俩的内存距离

<,>,<=,>=
比较迭代器位置靠前还是靠后,注意必须是同一类型的迭代器才有的比

difference_type
it1-it2的值类型就是这玩意儿

迭代器其实就是某元素的地址

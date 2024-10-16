注意:这些操作适用于ssub_match,csub_match,wssub_match,wcsub_match
matched     一个public bool数据成员,指向ssub_match对象
first       指向此ssub_match的首迭代器
second      指向此ssub_match的尾后迭代器(另外提一句,未匹配成功,它俩直接指向尾后迭代器)
length()    匹配的大小,若matched为false,则返回0
str()       返回一个包含输入中匹配部分的string,若matched为false,则返回空string
s=ssub      将ssub_match对象ssub转化为string对象s,等价于s=ssub.str(),转换运算符不是explicit的

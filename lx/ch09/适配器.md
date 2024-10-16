size_type       一种类型,用以保存最大类型的最大对象大小
valuce_type     元素类型
container_type  实现适配器的底层容器类型
A a;            创建一个名为a的空适配器
A a(c);         创建一个名为a的适配器,里面有容器c的拷贝
关系运算符      每个适配器都支持所有的关系运算符,!=,==,<,<=,>,>=,这些适配器都返回底层容器的比较结果
a.empty()       若容器a里含有任何元素,返回false,否则ture
a.size()        返回容器a中元素数目
swap(a,b)       交换a,b的值
a.swap(b)       和swap(a,b)等价

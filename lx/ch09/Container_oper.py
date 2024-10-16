类型别名
iterator            迭代器
const_iterator      只读迭代器
size_type           无符号整型,表示容器存储元素个数的类型
difference_type     带符号整型,用来表示两个迭代器之间距离
value_type          元素类型
reference           元素左值类型,与value_type&含义相同
const_reference     元素左值的const类型,即const value_type&
构造函数
C c;                默认构造函数,构造空容器
C c1(c2);           构造c2的拷贝c1
C c(b,e);           构造c,将迭代器b到e之间的元素拷贝到c(array除外)
C c{a,b,c,…};       列表初始化c
赋值与swap
c1=c2               将c1中的元素替换成c2中的元素
c1={a,b,c,…}        将c1中的元素替换成列表中的元素(array不适用)
a.swap(b)           交换a和b的元素
swap(a,b)           与跑a.swap(b)等价
大小
c.size()            c中元素个数(不支持forward_list)
c.max_size()        c中可保存的最大元素个数
c.empty()           检测c中是否存在元素,存在false,不存在true
添加或删除元素(不适用于array)
c.insert(args)      将args中的元素拷贝进c
c.emplace(inits)    使用inits构造c里的一个元素
c.erase(args)       删除args指定的元素
c.clear()           清空c,返回void
关系运算符
!=,==               所有容器都支持不等(相等)运算符
<,>,<=,>=           关系运算符(无序关联容器不支持)
获取迭代器
c.begin(),c.end()   返回指向c首,尾的迭代器
c.cbegin(),c.cend() 返回const_iterator
反向容器的额外成员(不支持forward_list)
reverse_iterator        按逆序寻址元素的迭代器
const_reverse_iterator  不能修改元素的逆序寻址的迭代器
c.rbegin(),c.rend()     指向首元素,尾元素之 前的迭代器
c.crbegin(),c.crend()   返回const_reverse_iterator

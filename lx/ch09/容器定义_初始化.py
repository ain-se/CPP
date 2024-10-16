C c;
若C是array,则c中的元素按默认初始化初始化,否则c为空

C c1(c2)
C c1=c2
将c2里的元素赋值给c1,c1c2必须同类型

C c{a,b,c,…}
C c={a,b,c,…}
将列表里的元素全部赋值给c

C c(b,e)
这里用的是(),而非{},将b和e两个迭代器之间包含b元素赋给c(array不适用)

只支持顺序容器(array除外)
C seq(n)
seq包含n个元素,这些元素都进行了值初始化

C seq(n,t)
seq包含n个元素,皆初始化为t

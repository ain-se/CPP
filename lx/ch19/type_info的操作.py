t1==t2          如果type_info对象t1和t2表示同一种类型,返回true,否则返回false
t1!=t2          如果type_info对象t1和t2表示不同的类型,返回true,否则返回false
t.name()        返回一个C风格字符串,表示类型名字的可打印形式,类型名字的生成因系统而异
t1.before(t2)   返回一个bool值,表示t1是否位于t2之前,before所采用的顺序关系依赖于编译器的

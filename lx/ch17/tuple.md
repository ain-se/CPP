tuple<T1,T2,…,Tn> t;                t是一个tuple(元组),数量为n,第i个成员数据类型为Ti,其值都进行了值初始化
tuple<T1,T2,…,Tn> t(V1,V2,…,Vn);    t是一个tuple,成员类型为T1,T2,…,Tn,每个成员都用对应的Vi进行值初始化,此构造函数是explicit的
make_tuple(V1,V2,…,Vn);             返回一个用给定初始值初始化的tuple,tuple的成员类型由成员值进行推断
t1==t2                              两个tuple数量相等,类型和值都相同时,t1==t2为ture
t1!=t2                              两个tuple数量,类型,值,只要其中一个不同,t1!=t2
t1 relop t2                         两个相同类型,数量的tuple,按照字典序比成员,按照首个不同的成员比较
get<i>(t)                           返回t的第i个数据成员的引用,若t是一个左值,则返回结果也是左值,若t是右值,返回结果也是右值,tuple中所有成员都是public
tuple_size<tupleType>::value        一个类模板,通过tuple来初始化,它有一个名为value的public constexpt static数据成员,类型为size_t,表示给定的tuple中成员数量
tuple_element<i,tupleType>::type    一个类模板,通过一个整型常量i与tuple类型来初始化,它有个名为type的public成员,来表示给定tuple中指定成员的类型

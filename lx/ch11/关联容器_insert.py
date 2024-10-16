c.insert(v)         v是value_type类型的对象,args用来构造一个元素
c.emplace(args)     对于map和set,只有当元素关键字不在c里,才插入(或构建)元素,该函数返回一个pair,里面包含一个迭代器,用来指向具有指定关键字的元素,以及一个指示插入是否成功的bool值
c.insert(b,e)       b,e是两个迭代器,用来插入b和e之间的元素,不包括e
c.insert(i1)        用来插入一个i1列表
c.insert(p,v)       类似insert(v),将p作为一个提示,用来指示从哪开始搜索新元素应该存储的位置,返回一个迭代器,指向具有给定关键字的元素
c.emplace(p,args)   类似emplace(args),将p作为一个提示,用来指示从哪开始搜索新元素应该存储的位置,返回一个迭代器,指向具有给定关键字的元素

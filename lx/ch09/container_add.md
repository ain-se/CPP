这些操作会改变容器大小,array无效
forward_list有自己专属的insert和emplace
forward_list不支持push_back和emplace_back
vector和string不支持push_front和emplace_front
c.push_back(t)
c.emplace_back(args)
在尾部添加一个值为t或由args创建的元素,返回void

c.push_front(t)
c.push_front(args)
在头部添加一个值为t或由args创建的元素,返回void

c.insert(p,t)
在p位置插入一个t,后面

c.emplace(p,args)
在p指向的位置原地插入args

c.insert(p,n,t)
在迭代器p指向的位置插入n个元素t的副本

c.insert(p,b,e)
在迭代器p指向的位置插入从迭代器b到e所指定范围中的所有元素

c.insert(p,i1)
在迭代器p指向的位置插入一个元素,该元素是通过移动(如果可能)或复制i1得到的

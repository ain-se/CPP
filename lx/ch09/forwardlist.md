lst.before_begin()
返回一个迭代器,指向forward_list中第一个元素之前的位置,这通常用于插入元素到列表的开始位置

lst.cbefore_begin()
与before_begin()功能相同,但是返回的是常量迭代器 

lst.insert_after(p,t)
在迭代器p指向的元素之后插入一个值t

lst.insert_after(p,n,t)
在迭代器p指向的元素之后插入n个值t

lst.insert_after(p,b,e)
在迭代器p指向的元素之后插入一个区间[b,e)中的元素,这个区间由迭代器b和e指定

lst.insert_after(p,i1)
在迭代器p指向的元素之后插入一个由迭代器i1指定的单个元素

emplace_after(p,args)
在迭代器p指向的元素之后就地构造一个元素,args是构造新元素的参数

lst.erase(p)
删除迭代器p指向的元素

lst.erase(b,e)
删除迭代器b和e(不包括e)之间的元素

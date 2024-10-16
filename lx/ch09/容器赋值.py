c1=c2
将c2里的元素赋给c1,c1c2必须是同类型

c={a,b,c,…}
将列表中的值赋给c

swap(c1,c2)
c1.swap(c2)
交换c1c2的元素

assign操作不适用于关联容器和array
seq.assign(b,e)
将seq里的元素替换为b到e,包括b,之间的元素seq必须是另一个容器

seq.assign(i1)
将seq里的元素统统设为i1

seq.assign(n,t)
将seq清空,并放入n个t

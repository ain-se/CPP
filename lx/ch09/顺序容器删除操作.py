此篇操作会改变容器大小,不适用于array
forward_list有专属erase
forward_list不支持pop_back,string和vector不支持pop_front
c.pop_back()
删除容器c的最后一个元素

c.pop_front()
删除容器c的第一个元素

c.erase(p)
删除容器c中由迭代器p指向的元素

c.erase(b,e)
删除容器c中从迭代器b到迭代器e(不包括e)之间的所有元素

c.clear()
清空容器c,返回void

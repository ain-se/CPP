c.erast(k)      从c中删除每个关键字为k的元素,返回一个size_type的值,指出删除数量
c.erast(p)      从c中删除迭代器p所指向的元素,p!=c.end(),返回一个指向p之后的迭代器,若正好是c.end()迭代器,则返回c.end()
c.erast(b,e)    删除迭代器b和e之间的元素(不包括e),返回e

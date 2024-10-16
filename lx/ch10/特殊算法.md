返回void
lst.merge(lst2)         合并lst2到lst里,lst2清空,lst和lst2必须是有序的,默认从小到大
lst.merge(lst2,comp)    使用给定的比较函数来合并元素
lst.remove(val)         删除lst中与val等值的元素
lst.remove_if(pred)     删除所有满足pred条件的元素
lst.reverse()           反转lst里的所有元素 
lst.sort()              从小到大排序 
lst.sort(comp)          按条件排序
lst.unique()            将重复的元素丢到后面去,并删除
lst.unique(pred)        由pred来决定哪些重复数据需要移除 

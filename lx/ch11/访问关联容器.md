lower_bound和upper_bound不适用于无序容器
下标和at只适用于非const的map和unordered_map
c.find(k)           返回一个迭代器,若k在c里,则返回指向k的迭代器,若没在,则返回尾后迭代器
c.count(k)          返回关键字为k的元素数量,对于不允许关键字重复的容器来说,则返回值永远是0或1
c.lower_bound(k)    返回一个迭代器,指向关键字不小于k的元素
c.upper_bound(k)    返回一个迭代器,指向关键字不大于k的元素
c.equal_range(k)    返回迭代器pair,表示关键字等于k的元素范围,若k不存在,则pair的两个成员均为c.end()

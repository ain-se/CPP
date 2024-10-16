搜索操作返回指定字符的下标,如果没找到则返回npos
s.find(args)                查找s在args中第一次出现的位置
s.rfind(args)               查找s在args中最后一次出现的位置
s.find_first_of(args)       在s中查找args中的任一字符第一次出现的位置
s.find_last_of(args)        在s中查找args中的任一字符最后一次出现的位置
s.find_first_not_of(args)   在s中查找第一个不在args中的字符
s.find_last_not_of(args)    在s中查找最后一个不在args中的字符

args必须是以下形式之一
c,pos       从s中位置pos开始查找字符c,pos默认为0
s2,pos      从s中位置pos开始查找字符串s2,pos默认为0
cp,pos      从s中位置pos开始查找指针cp指向的以空字符结尾的C风格字符串,pos默认为0
cp,pos,n    从s中位置pos开始查找指针cp指向的数组的前n个字符,pos和n都无默认值

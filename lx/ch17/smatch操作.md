这些操作也适用于cmatch,wsmatch,wcmatch和对应的csub_match,ssub_match,wcsub_match和wssub_match
m.ready()   如果已经通过调用regex_serach或regex_match设置了m,则返回true,否则false,若ready返回false,则对m操作结果是未定义的
m.size()    如果匹配失败返回0,否则返回最近一次匹配的正则表达式中子表达式的数目
m.empty()   若m.size()返回0,则返回true
m.prefix()  一个ssub_match对象,表示当前匹配之前的序列
m.suffix()  一个ssub_match对象,表示当前匹配之前的序列
m.format(…) …代表参数,该行为的主要作用是替换
在接受一个索引的操作中,n的值默认为0,且必须小于m.size()
第一个子匹配(索引为0)表示整个匹配
m.length(n)         第n个匹配的子表达式的大小
m.position(n)       第n个子表达式距序列开始的距离
m.str(n)            第n个子表达式匹配的string
m[n]                对应第n个子表达式的ssub_match对象
m.begin(),m.end()   表示m中sub_match元素范围迭代器
m.cbegin(),m.cend() 返回const_iterator

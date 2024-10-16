regex r(re)     re表示一个正则表达式,它可以 是一个string,一个表示字符范围的迭代器,一个指向空字符结尾的字符数组的指针,一个字符指针和 一个计数器或是一个花括号包围的字符列表,未指 定f,其默认值为ECMAScript
regex r(re,f)   re表示一个正则表达式,它可以 是一个string,一个表示字符范围的迭代器,一个指向空字符结尾的字符数组的指针,一个字符指针和 一个计数器或是一个花括号包围的字符列表,f是指出对象如何处理的标志,f通过下面列出的值来设置
r1=re           将r1的正则表达式替换成re,re 表示一个正则表达式,它可以是一个string,一个表示字符范围的迭代器,一个指向空字符结尾的字符 数组的指针,一个字符指针和一个计数器或是一个 花括号包围的字符列表
r1.assign(re,f) 与赋值运算符(=)效果相同,可选标志f也与regex构造函数中的对应的参数含义相同
r.mark_count()  r中子表达式的数目
r.flags()       返回r的标志集
注:构造函数和赋值操作可能抛出regex_error异常
定义regex时指定的标志
定义在regex和regex_constants::syntax_option_type中
icase       在匹配过程中忽略大小写
nosubs      不保存匹配的子表达式
optimize    执行速度优先于构造速度
ECMAScript  使用ECMA-262的语法
basic       使用POSIX基本的正则表达式的语法
extended    使用POSIX扩展的正则表达式的语法
awk         使用POSIX版本的awk语言的语法
grep        使用POSIX版本的grep的语法
egrep       使用POSIX版本的egrep的语法

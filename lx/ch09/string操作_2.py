s.insert(pos,args)
在字符串s的pos位置插入字符串args
参数:
pos:插入位置的索引。
args:要插入的字符串。

s.erase(pos,len)
从字符串s的pos位置开始删除len个字符
参数:
pos:开始删除的位置索引。
len:要删除的字符数。

s.assign(args)
将字符串s的内容替换为字符串args
参数:
args:用来替换的新字符串

s.append(args)
在字符串s的末尾追加字符串args
参数:
args:要追加的字符串

s.replace(range,args)
替换字符串s中从range.first到range.second的部分为字符串args
参数:
range:一个 std::pair,表示要替换的字符串范围
args:用来替换的新字符串

args可以是以下形式:assign,append可以使用所有形式
str不能与s相同,迭代器be不能指向s
str
字符串str

str,pos,len
字符串str,从pos开始,最多到len个字

cp,len
从cp指向的字符前到最多len个字

cp
cp指向的以空字符结尾的字符数组

n,c
n个字符c

b,e
迭代器be圈定范围内的所有字符

初始化列表
花括号包围的,以逗号分隔的字符列表
replace和insert所允许的args依赖于range和pos是如何指定的
replace         replace     insert      insert      args可以是 
(pos,len,args)  (b,e,args)  (pos,args)  (iter,args)
是              是          是          否          str
是              否          是          否          str,pos,len
是              是          是          否          cp,len
是              是          否          否          cp
是              是          是          是          n,c
否              是          否          是          b2,e2
否              是          否          是          初始化列表

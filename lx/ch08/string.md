sstream strm;
未绑定对象的实例

sstream strm(s);
将这个对象绑定为s

strm.str()
返回strm中所保存的string的拷贝

strm.str(s);
将字符串s拷贝进strm中,返回void

istringstream
输入字符串流,处理方法与流相同,切记,它是类,而非对象,不可直接使用

ostringstream
输出字符串流,与输入字符串流相反

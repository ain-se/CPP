m.format(dest,fmt,mft)              使用格式化字符串fmt生成格式化输出,匹配在m中,可选的match_flag_type标志在mft中,写入迭代器dest指向的目标位置,并接受fmt参数,mft的默认值为format_default
m.format(fmt,mft)                   使用格式化字符串fmt生成格式化输出,匹配在m中,可选的match_flag_type标志在mft中,返回一个string,保存输出,并接受fmt参数,mft的默认值为format_default
regex_replace(dest,seq,r,fmt,mft)   遍历seq,用regex_search查找与regex对象r匹配的子串,使用格式化子串fmt和可选的match_flag_type标志来生成输出,将输出写入dest迭代器指向的指定位置并接受一对迭代器seq表示范围,fmt既可以是一个string,也可以是一个指向空字符结尾的字符数组指针,且mft的默认值为match_default
regex_replace(seq,r,fmt,mft)        遍历seq,用regex_search查找与regex对象r匹配的子串,使用格式化子串fmt和可选的match_flag_type标志来生成输出,返回一个string,保存输出,且seq既可以是一个string,也可以是一个指向空字符结尾的字符数组的指针,fmt既可以是一个string,也可以是一个指向空字符结尾的字符数组指针,且mft的默认值为match_default

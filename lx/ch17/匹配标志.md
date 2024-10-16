定义在regex_constants::match_flag_type中
match_default       等价于format_default
match_not_bol       不将首字符作为行首处理
match_not_eol       不将尾字符作为行尾处理
match_not_bow       不将首字符作为单词首处理
match_not_eow       不将尾字符作为单词尾处理
match_any           如果存在多于一个匹配,则可返回任意一个匹配
match_not_null      不匹配任何空序列
match_continuous    匹配必须从输入的首字符开始
match_prev_avail    输入序列必须包含第一个匹配之前的内容
format_default      用ECMAScript规则替换字符串
format_sed          用POSIX sed规则替换字符串
format_no_copy      不输出输入序列中未匹配的部分
format_first_only   只替换子表达式的第一次出现

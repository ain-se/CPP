注:这些操作返回bool值,用来指出是否找到匹配
(seq,m,r,mft)   在字符序列seq中找到regex对象,对象r中的正则表达式,seq可以是string用来表示一对迭代器以及一个指向空字符的数组指针,m是一个match对象用来保存匹配结果的相关细节,且m与seq必须是相互兼容的类型,mft是一个可选的regex_constants::match_flag_type值,它们会影响匹配 过程
(seq,r,mft)     在字符序列seq中找到regex对象,对象r中的正则表达式,seq可以是string用来表示一对迭代器以及一个指向空字符的数组指针,mft是一个可选的regex_constants::match_flag_type值,它们会影响匹配过程

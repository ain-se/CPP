这些操作也适用于cregex_iterator,wsregex_iterator和wcregex_iterator
sregex_iterator it(b,e,r);  一个sregex_iterator,遍历迭代器b和e表示的string,它调用sregex_search(b,e,r)将it定位到输入中第一个匹配的位置
sregex_iterator end;        sregex_iterator的尾后迭代器
*it                         根据最后一个调用regex_search的结果,返回一个smatch对象的引用
it->                        根据最后一个调用regex_search的结果,返回一个指向smatch对象的指针
++it                        从插入序列当前位置开始调用regex_search,返回递增后迭代器
it++                        从插入序列当前位置开始调用regex_search,返回旧值
it1==it2                    说明it1与it2两个sregex_iterator迭代器都指向同一个位置
it1!=it2                    说明it1与it2指向不同位置

pair<T1,T2> p           p是一个pair,两个类型分别为T1和T2的成员进行了值初始化
pair<T1,T2> p(v1,v2)    p是一个成员类型为T1和T2的pair,first和second成员分别用v1和v2进行初始化
pair<T1,T2>p =(v1,v2);  等价于p(v1,v2)
make_pair(v1,v2)        返回一个用v1和v2初始化的pair跑,pair的类型由v1和v2的类型推断出来
p.first                 返回p的名为first(公有)数据成员
p.second                返回p的名为second(公有)数据成员
p1==p2                  当first和second成员分别相等时,两个pair相等,用==运算符比较
p1!=p2                  当first和second成员只要有一个不等,两个pair不等
p<first,second>         即first为键,second为值

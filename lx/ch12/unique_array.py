指向unique_ptr不支持成员访问运算符(点和箭头运算符),其他unique_ptr操作不变
unique_ptr<T[]> u       u可以指向一个动态分配的数组,数组元素类型为T
unique_ptr<T[]> u(p)    u指向内置指针p所指向的动态分配数组,p必须能转换为T*
u[i]                    返回u拥有的数组的位置i处的对象,u必须指向一个数组

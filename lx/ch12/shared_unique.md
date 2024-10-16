<头文件memory>
shared_ptr<T> sp    空智能指针,指向类型为T的对象
unique_ptr<T> up    空智能指针,指向类型为T的对象
p                   将p用作一个条件判断,若p指向一个对象,则true
*p                  解引用p,获得他所指向的对象
p->mem              等价于(*p).mem
p.get()             返回p中保存的指针,要小心使用,若智能指针释放了其对象,返回的指针所指向的对象也消失了
swap(p,q)           交换pq指针
p.swap(q)           等价于swap(p,q)

shared_ptr<T> p(q)      p管理内置指针q所指向的对象,q必须指向new分配的内存,且能够转换成T*类型
shared_ptr<T> p(u)      p从unique_ptr u那里接管了对象的所有权,并将u置为空
shared_ptr<T> p(q,d)    p接管了内置指针q所指向的对象所有权,q必须能转换成T*类型,p将使用可调用对象d来代替delete
shared_ptr<T> p(p2,d)   p是shared_ptr p2的拷贝,p将用可调用对象d来代替delete
p.reset()               p是唯一指向其对象的shared_ptr,reset会释放其对象
p.reset(q)              若传递了可选参数内置指针q,会令p指向q,否则会将p置为空
p.reset(q,d)            若还传递了参数d,将会调用d而非delete来释放q

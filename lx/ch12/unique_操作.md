unique_ptr<T> u1        空unique_ptr,可以指向类型为T的对象,u1使用delete来释放它的指针
unique_ptr<T,D> u2      空unique_ptr,可以指向类型为T的对象,u2使用一个类型为D的可调用对象来释放它的指针
unique_ptr<T,D> u(d)    空unique_ptr,可以指向类型为T的对象,用类型为D的对象d来释放它的指针
u=nullptr               释放u指向的对象,将u置为空
u.release()             u放弃对指针的控制权,返回指针,并将u置为空
u.reset()               释放u指向的对象
u.reset(q)              如果提供了内置指针q,令u指向这个对象 
u.reset(nullptr)        否则将u置为空

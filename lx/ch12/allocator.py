allocator<T> a      定义一个名为a的allocator对象,它可以为数据类型为T的内存开辟空间
a.allocate(n)       分配一段原始的,未构造的内存,用来存放n个T类型对象
a.deallocate(p,n)   释放从指针p开始的内存,这块内存保存了n个类型为T的对象,p必须是一个先前由allocate返回的指针,n必须是p创建时所要求的大小,在调用deallocate之前,必须对这块内存中创建的每个对象调用destroy
a.construct(p,args) p必须是一个类型为T*的指针,指向一块原始内存,args是传递给类型为T的构造函数的参数,用于在p指向的内存中构造一个对象,这个操作可以在分配的内存中构造一个对象
a.destroy(p)        p为T*类型的指针,此算法对p指向的对象执行析构函数

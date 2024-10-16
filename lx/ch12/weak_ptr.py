weak_ptr<T> w       空weak_ptr,可以指向类型为T的对象
weak_ptr<T> w(sp)   与shared_ptr sp指向相同对象的weak_ptr,T必须能转化为sp指向的类型
w=p                 p可以是一个shared_ptr,或weak_ptr,赋值后w与u共享对象
w.reset()           将w置为空
w.use_count()       与w共享对象的shared_ptr数量
w.expired()         若w.use_count()为0,返回true,否则false
w.lock()            如果w.expired为true,返回一个空的shared_ptr,否则返回一个指向w的对象的shared_ptr

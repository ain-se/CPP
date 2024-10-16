<头文件memory>
make_shared<T> (args)   返回一个shared_ptr,指向一个动态分配的类型为T的对象,并初始化为args
shared_ptr<T> p(q)      p是shared_ptr q的拷贝,此操作会递增q中的计数器,q中的指针必须能转换成T*
p=q                     pq都是shared_ptr,所保存的指针必须能相互转化,此操作会递减p的引用计数,递增q的引用计数,若p的引用计数为0时,则将其管理的原内存释放
p.unique()              若p.use_count为1,则返回true,否则false
p.use_count()           返回与p共享对象的智能指针的数量,可能很慢,主要用于调试

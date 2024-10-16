这些函数在给定目的位置创建元素,而不是由系统分配内存给他们
uninitialized_copy(b,e,b2)      从迭代器b到e指出的输入范围中拷贝元素到b2指定的未构造的原始内存中,b2指向的内存必须足够大
uninitialized_copy_n(b,n,b2)    从迭代器b指向的元素开始拷贝n个元素进b2开始的内存
uninitialized_fill(b,e,t)       在be迭代器指定的原始内存中创建元素,里面元素均为t的拷贝
uninitialized_fill_n(b,n,t)     从迭代器b指向的内存开始,创建n个对象,放入b2指向的内存地址,b2指向的内存地址必须足够大

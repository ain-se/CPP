桶接口
c.bucket_count()        正在使用的桶数目
c.max_bucket_count()    容器能容纳最多桶的数量
c.bucket_size(n)        第n个桶里有多少个元素
c.bucket(k)             关键字为k的元素在哪个桶中
桶迭代
local_iterator          可以用来访问桶的迭代器类型
const_local_iterator    桶迭代器的const版本
c.begin(n),c.end(n)     桶n的首元素迭代器和尾后迭代器
c.cbegin(n),c.cend(n)   与前两个迭代器类似,但返回const_local_iterator
哈希策略
c.load_factor()         每个桶的平均元素数量,返回float值
c.max_load_factor()     c试图维护平均桶大小,会在必要时添加桶数量,以使得load_factor<=max_load_factor
c.rehash(n)             重组存储,使得bucket_count>=n,且bucket_count>size/max_load_factor
c.reserve(n)            重组存储,使得c可以保存n个元素且不必rehash

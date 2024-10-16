b.any()                 b中是否存在置位的二进制位
b.all()                 b中所有二进制位都置位了吗
b.none()                b中不存在置位的二进制位吗
b.count()               b中置位的位数
b.size()                一个constexpt函数,返回b中的位数
b.test(pos)             在pos位置上的位是否是置位的,是返回true,否返回false
b.set(pos,v)            将pos处的位设置为bool值v,v默认为true
b.set()                 若不传递参数,则将b中所有的位全部置位
b.reset(pos)            将位置pos处的位复位
b.reset()               将b中所有的位全部复位
b.flip(pos)             改变pos处位的状态
b.flip()                改变b中所有位的状态
b[pos]                  访问b中pos处的位,若b是const,则当该位置位时b[pos]返回一个bool值true,否则false
b.to_ulong()            返回一个unsigned long值,其位模式与b相同,若b中的位模式存不下指定结果的类型,抛出一个overflow_error异常
b.to_ullong()           返回一个unsigned long long值,其位模式与b相同,若b中的位模式存不下指定结果的类型,抛出一个overflow_error异常
b.to_string(zero,one)   返回一个string,表示b中的位模式,zero和one默认为0和1,用来代替b中的0和1
os<<b                   将b中的二进制位打印成0和1,打印到流os中
is>>b                   从流is中读取字符存入b中,当字符不是0或1时,或是已经读入b.size()个位数时,停止读取
与if一起用

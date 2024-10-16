插入迭代器
it=t            在it指定的位置插入t 
*it,++it,it++   这些操作虽然存在,但不会对it做任何事情,每个操作都返回it
back_inserter   使用push_back
front_inserter  使用push_front
inserter        inserter(容器,迭代器)

流迭代器(iostream迭代器)
istream_iterator绑定在输入流上
istream_iterator<T> in(is)  in从is流中读取数据
istream_iterator<T> end     读取类型为T的值的istream_iterator迭代器表示尾后位置
in1==in2                    读取相同类型如果它俩都是尾后迭代器或绑定到相同的输入则in1==in2,反之则in1!=in2
*in                         获取值
in->mem                     与(*in).mem等价
++in,in++                   移动in迭代器

ostream_iterator绑定在输出流上
ostream_iterator<T> out(os)     out从os流中写入数据
ostream_iterator<T> out(os,d)   out将类型为T的值写入os输出流中跑,且每个值后面都跟着d,d是一个后面跟着空字符结尾的字符
out=val                         将val写入到out所绑定的输出流中,类型必须一致
*out,out++,++out                运算符存在,且返回out

反向迭代器
这玩意没啥可说的,一切操作与正向迭代器相反,标志就是前面加r,rbegin下一个位置就是end

迭代器类别
输入迭代器      只支持单向读操作
输出迭代器      只支持单向写操作
前向迭代器      支持单向遍历,不支持逆向操作
双向迭代器      支持正逆向操作
随机访问迭代器  支持随机位置读写操作,用+-

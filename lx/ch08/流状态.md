strm::iostate
strm是一种IO类型,iostate是一种机器相关类型,提供表达条件状态的完整功能

strm::badbit
表示流已崩溃

strm::failbit
一个IO操作失败

strm::eofbit
表示流已到达文件结束

strm::goodbit
流未处于失败状态且此值保证为0

s.eof()
若流s到达文件末尾,则返回true否则false

s.fail()
是否输入输出操作失败,操作失败返回true

s.bad()
表示流碰到了硬件损坏或系统级错误

s.good()
表示流对象s没有遇到任何错误

s.clear()
表示将流s所有条件状态重置复位,流的状态设为有效,返回void

s.clear(flags)
根据flags标志位,将流s中对应条件状态复位,flags类型为strm::iostate,返回void

s.setstate(flags)
根据flags标志位,将流s中对应条件状态置位,flags类型为strm::iostate,返回void

s.rdstate()
返回流s的当前条件状态,返回值类型为strm::iostate

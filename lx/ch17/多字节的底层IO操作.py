is.get(sink,size,delim)     从is中读取最多size个字节,并保存在字符数组中,字符数组的起始地址由sink给出,读取过程直至遇到了delim或读取了size个字节或遇到文件尾停止,如果遇到了delim,则将其留在输入流中,不读取出来存入sink
is.getline(sink,size,delim) 与上面一样,但会读取并丢弃delim
is.read(sink,size)          读取最多size个字节,存入字符数组sink中,返回is
is.gcount()                 返回上一个未格式化读取操作从is中读取的字节数
os.write(source,size)       将字符数组source中的size个字节写入os,返回os
is.ignore(size,delim)       读取并忽略最多size个字符,与其他未格式化函数不同,ignore有默认参数,size默认值为1,delim默认值为文件尾

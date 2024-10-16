is.get(ch)      从istream is中读取下一个字节,存入字符ch中,返回is
os.put(ch)      将字符ch输出到ostream os中,返回os
is.get()        将is的下一个字节作为int,返回
is.putback(ch)  将字符ch放回is,返回is
is.unget()      将is向后移动一个字节,返回is
is.peek()       将下一个字节作为int返回,但不从流中删除它

tellg()         返回一个输入流(tellg)标记的当前位置
tellp()         返回一个输出流(tellp)标记的当前位置
seekg(pos)      在一个输入流中将标记重定位到一个给定的绝对地址,pos通常是前一个tellg返回的值
seekp(pos)      在一个输出流中将标记重定位到一个给定的绝对地址,pos通常是前一个tellp返回的值
seekp(off,from) 在一个输出流中将标记定位到from之前或之后off个字符
seekg(off,from) 在一个输入流中将标记定位到from之前或之后off个字符
from可以是以下的值
beg 偏移量相对于流开始位置
cur 偏移量相对于流当前位置
end 偏移量相对于流结尾位置

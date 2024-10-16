fstream fstrm;
创建一个未绑定文件的文件流,fstream是头文件fstream里的一个类型,可用于读写文件

fstream fstrm(a);
创建一个并打开名为a的文件

fstream fstrm(s,mode);
打开文件s,mode是打开方式

fstrm.open(s);
打开名为s的文件,s可以是字符串也可以是指针,默认文件mode依赖fstream,返回void

fstrm.close()
关闭与fstrm绑定的文件,返回void

fstrm.is_open()
返回一个bool值,用来表明fstrm是否成功打开或关闭文件

ifstream
从一个给定文件中读数据

ofstream
往一个给定文件里写数据

ffstream
能读又能写

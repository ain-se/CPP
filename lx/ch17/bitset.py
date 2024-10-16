bitset<n> b;                    b有n位,每一位均为0,此构造函数是一个constexpt
bitset<n> b(u);                 b是unsigned long long值u的低n位的拷贝,如果n大于unsigned long long的位数,简单来说,就是存不下了,则b的超出unsigned long long的高置为0位,说人话,就是截断,此构造函数就是一个constexpt
bitset<n> b(s,pos,m,zero,one);  b是string s从位置pos,s只能包含字符0或1,除此之外,都会抛出invalid_argument异常,pos默认为0,m默认为string::npos,zero默认为'0',one默认为'1'
bitset<n> b(cp,pos,m,zero,one); 与上一个构造函数相同,但从cp指向的字符数组中拷贝字符,若无m,则cp必须指向一个C风格的字符数组,若有m,则必须保证从cp开始必须有m个'0'或'1'
接受一个string或一个字符指针的构造函数是explicit的,在新标准中增加了为0或1指定其他字符的功能
string从左到右,bitset从右到左

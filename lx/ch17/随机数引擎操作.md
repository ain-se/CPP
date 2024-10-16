Engine e;           默认构造函数,使用该引擎类型默认的种子
Engine e(s);        使用整型值s作为种子
e.seed(s);          使用种子s重置引擎的状态
e.min();            该引擎可生成的最小值
e.max();            该引擎可生成的最大值
Engine::result_type 该引擎生成的unsigned整型类型
e.discard(u);       将引擎推进u步,u的类型为unsigned long long

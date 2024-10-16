function<T> f;          f是一个用来存储可调用对象的空function,这些可调用对象的调用形式应与函数类型T相同(即T是retType(args))
function<T> f(nullptr); 显式的构造一个空function
function<T> f(obj);     在f中存储可调用对象obj的副本
f                       将f作为条件,当f含有一个可调用对象时为真,否则为假
f(args)                 调用f中的对象,参数是args
定义为function<T>的成员类型
result_type             该function类型的可调用对象返回的类型
argument_type           当T有一个或两个实参时,一个实参,argument_type为其类型的同义词
first_argument_type     两个实参,first_argument_type
second_argument_type    和second_argument_type分别为两个实参的类型

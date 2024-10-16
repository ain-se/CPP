try {
    // 尝试执行的代码
} catch (ExceptionType1& e) {
    // 如果在try块中引发了ExceptionType1，则执行这里的代码
} catch (ExceptionType2& e) {
    // 如果在try块中引发了ExceptionType2，则执行这里的代码
} catch (...) {
    // 捕获所有其他类型的异常
}
exception
最常见的问题
runtime_error
只有在运行时才会出现
runge_error
运算结果超出有意义的值域
overflow_error
上溢
underflow_error
下溢
logic_error
逻辑错误
domain_error
参数对应的结果不存在
invalid_argument
无效参数
length_error
试图创建一个超出类型的值
out_of_range
使用一个超出有效范围的值

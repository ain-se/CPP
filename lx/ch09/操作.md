栈默认基于deque实现,也可以在list或vector之上实现
s.pop()         删除栈顶元素,但不返回该元素值
s.push(item)    创建一个新元素压入栈顶,该元素通过拷贝或移动item而来
s.emplace(args) 或由args构建
s.top()         返回栈顶,但不将元素弹出栈

queue默认基于deque实现,priority_queue默认基于vector实现
queue也可以用list或vector实现,priority_queue可以用deque实现
q.pop()         返回queue的首元素或priority_queue的最高优先级元素,但不删除它
q.front()       返回首元素或尾元素,但不删除此元素
q.back()        只适用于queue

q.top()         返回最高优先级元素,但不删除它
q.push(item)    在queue末尾,或priority_queue中恰当位置创建一个新元素,其值为item
q.emplace(args) 或由args构造

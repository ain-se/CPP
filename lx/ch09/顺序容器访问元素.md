at和下标操作只适用于string,vector,deque和array
back不适用于forward_list
c.back()
返回c中尾元素的引用,若c为空,则函数行为未定义

c.front()
返回c中首元素的引用,若c为空,则函数行为未定义

c[n]
返回c里下标为n的元素引用,n是无符号整型,n<=c.size()

c.at(n)
返回下标为n的元素引用,若越界,则抛出out_of_range异常

lst.splice(args)或flst.splice_after(args)
(p,lst2)        p是一个指向lst的迭代器,或flst的首前位置的迭代器,函数将lst2中所有元素移动到lst中p之前的位置或flst中p之后的位置,将lst2清空,且类型必须一致,不能是同一个链表 
(p,lst2,p2)     p2是指向lst2中元素位置的有效迭代器,将p2指向的元素移动到lst,或将p2之后的元素移动到flst,lst2可以是和lst或flst相同的链表
(p,lst2,b,e)    b和e必须是lst2中合法范围,将给定范围中元素从lst2移动到lst或flst,lst2和lst(或flst)可以是相同链表,但p不能指向给定范围中元素

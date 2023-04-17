/**
 * 两个单链表相交，意味着它们有公共的结点，也就是说有两个单链表的某两个结点指向了同一个结点。
 * 公共的结点数至少为1个。
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct List{
	int elem;
	struct List* next;
}LinkedList;

//自定义bool类型
typedef enum bool{
	false=0,
	true=1
}bool;

//判断两个单链表是否相交
/**
 * @brief 依次遍历两个链表，就会出现两个遍历结点的地址一样，
 * 		  就说明该结点为两个链表的公共结点，这就表明两个链表相交了。
 * 
 * @param list1 
 * @param list2 
 * 
 * @return bool 
 */
bool intersect(LinkedList* list1, LinkedList* list2)
{
	LinkedList* tp1=list1;
	LinkedList* tp2=list2;
	while(tp1)
	{
		while(tp2)
		{
			if(tp1==tp2) return true;	//如果找到地址相等的结点，直接返回
			tp2=tp2->next;				//没找到tp2继续向后移动
		}
		tp1=tp1->next;	//tp2一圈遍历完后tp1后移
	}
	return false;		//两个链表到遍历结束还没找到一样地址的结点，说明链表并不相交
}


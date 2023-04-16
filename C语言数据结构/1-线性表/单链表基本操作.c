/**
 * 单链表基本操作(带头结点)
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode{
	int elem;			//数据域
	struct LNode* next;	//下一个指针域
}LinkedList;

//链表初始化
LinkedList *init();

//链表插入元素(在index位置处插入元素elem)
LinkedList* insert(LinkedList* list, int index,int elem);

//单链表删除(根据索引位置index删除)
LinkedList* delete(LinkedList* list, int index);

//单链表查找元素(查出elem元素在链表中的位置)
int select(LinkedList* list, int elem);

//链表更新元素(更新链表list中下标index的元素值)
LinkedList* update(LinkedList* list, int index, int newELem);

int main()
{
	return 0;
}

LinkedList *init()
{
	LinkedList *head=(LinkedList* )malloc(sizeof(LinkedList));	//创建头节点
	if(!head) return NULL;	//创建失败
	
	//初始化头节点
	head->next=NULL;
	head->elem=-1;	//	头节点不存储元素值，默认为-1
	return head;
}

LinkedList* insert(LinkedList* list, int index,int elem)
{
	//创建临时结点指向头节点
	LinkedList* tmp=list;
	//选找出要插入的位置
	for(int i=1; i<index;i++) 
	{
		tmp=tmp->next;
		if(!tmp) return list;	//如果在遍历过程中发现tmp为空，
								//说明已经遍历完了还没有找到要插入的位置，
								//这可以判断出插入位置不合法。
	}
	//创建插入节点
	LinkedList *newNode=(LinkedList* )malloc(sizeof(LinkedList));
	if(!newNode) return list;	//开辟空间失败直接返回
	list->elem=elem;
	newNode->next=tmp->next;
	tmp->next=newNode;
	return list;
}

LinkedList* delete(LinkedList* list, int index)
{
	LinkedList* tmp=list;
	//找到要删除的结点的位置
	for(int i=0;i<index;i++)
	{
		tmp=tmp->next;
		if(!tmp) return list;	//如果在遍历过程中发现tmp为空，
								//说明已经遍历完了还没有找到要删除的位置，
								//这可以判断出删除位置不合法。
	}
	LinkedList* deleteNode=tmp->next;
	tmp->next=tmp->next->next;
	free(deleteNode);
	return list;
}

int select(LinkedList* list, int elem)
{
	LinkedList* tmp=list;
	int index=1;	//定义一个计数器
	while(tmp->next)
	{
		tmp=tmp->next;
		if(tmp->elem==elem) return index;	//找打就直接返回计数器
		index++;	//当前循环没找到就+1
	}
	return -1;	//找不到就返回-1
}

LinkedList* update(LinkedList* list, int index, int newELem)
{
	LinkedList* tmp=list;
	for(int i=1;i<index;i++)
		tmp=tmp->next;
	tmp->next->elem=newELem;
	return list;
}

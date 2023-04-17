/**
 * 双向链表
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct DList{
	struct DList* prior;	//前驱指针
	int data;				//数据域
	struct DList* next;		//后继指针
}DList;

//初始化
DList* init(DList* list);

//显示双链表中的元素
void display(DList* list);

//双向链表添加元素到末尾
DList* insert_end(DList* list, int data);

//双向链表插入到指定位置
DList* insert_index(DList* list, int index, int data);

//双向链表删除值为data的结点
DList* remove_data(DList* list, int data);

//双链表查找结点
int select(DList* list, int data);

//双向链表更改节点
DList* update(DList* list, int index, int newElem);

int main()
{
	DList* list=NULL;
	list=init(list);
	insert_end(list,1);
	insert_end(list,2);
	insert_end(list,3);
	insert_end(list,4);
	display(list);
	printf("-----\n");
	
	list=insert_index(list,3 ,9);
	display(list);
	
	return 0;
}

DList* init(DList* list)
{
	list=(DList* )malloc(sizeof(DList));
	if(list==NULL)
	{
		printf("开辟空间失败\n");
		return NULL;
	}
	list->next=NULL;
	list->prior=NULL;
	list->data=-1;
	
	return list;
}

void display(DList* list)
{
	DList* tp=list;
	while(tp!=NULL)
	{
		printf("%d ",tp->data);
		tp=tp->next;
	}
	printf("\n");
}

DList* insert_end(DList* list, int data)
{
	DList* tp=list;
	//找打最后一个结点
	while(tp->next) tp=tp->next;
	
	//创建一个结点
	DList* node=(DList* )malloc(sizeof(DList));
	if(!node) return list;
	node->data=data;
	node->next=NULL;
	tp->next=node;
	node->prior=tp;

	return list;
}

DList* insert_index(DList* list, int index, int data)
{
	DList* tp=list;
	DList* node=(DList* )malloc(sizeof(DList));
	if(!node) return list;
	node->data=data;
	
	//判断插入的位置
	if(index==1)	//插在链表头
	{
		DList* tp2=tp->next;
		tp->next=node;
		node->prior=tp;
		node->next=tp2;
		tp2->prior=node;
		return list;
	}
	
	//插入的位置是否为最后一个
	int count=0;
	while(tp->next)
	{
		tp=tp->next;
		count++;
	}
	tp=list;	//	重置tp指向
	if(index>count){
		insert_end(list, data);
	}
	
	//否则是中间的位置,找到要插入的前一个位置
	for(int i=1;i<index;i++) tp=tp->next;
	
	DList* up=tp->next;
	tp->next=node;
	node->prior=tp;
	node->next=up;
	up->prior=node;
	return list;
}

DList* remove_data(DList* list, int data)
{
	DList* tp=list;
	while(tp)
	{
		if(tp->data==data)
		{
			tp->prior->next=tp->next;
			tp->next->prior=tp->prior;
			free(tp);
			return list;
		}
		tp=tp->next;
	}
}

int select(DList* list, int data)
{
	DList* tp=list;
	int count=0;
	while(tp)
	{
		if(tp->data==data) return count;
		tp=tp->next;
		count++;
	}
	return -1;
	
}


DList* update(DList* list, int index, int newElem)
{
	DList* tp=list;
	//找到要修改的结点
	for(int i=1;i<index;i++)
	{
		tp=tp->next;
	}
	tp->data=newElem;
	return list;
}

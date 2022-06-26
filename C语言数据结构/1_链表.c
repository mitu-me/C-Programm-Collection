#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;	//插入的元素
	struct node* next;	//指向下一个元素
};

//初始化链表
struct node* init();

//插入节点
/**
 * @param index:插入位置(1-);data:插入的元素值
 *
 * 头插
 * 中间插
 * 尾插
 **/
struct node* insert(struct node* head,int index,int data);

//打印当前链表所有元素
void print(struct node* head);

int main()
{
	struct node* head=init();
	printf("头节点元素:%d\n",head->data);
	
	insert(head,1,1);
	print(head);
	
	return 0;
}

struct node* init()
{
	struct node* head=(struct node*)malloc(sizeof(struct node));
	if(head!=NULL)
	{
		head->next=NULL;
		head->data=-1;
		return head;
	}
}

struct node* insert(struct node* head,int index,int data)
{
	struct node* current_head=head;
	//统计当前节点有多少个
	int node_len=1;
	while(current_head->next!=NULL)
	{
		node_len++;
	}
	
	printf("当前链表共有%d个节点\n",node_len);
	//重置恢复头节点
	current_head=head;
	
	if(node_len==1 || index==1)
	{
		//只有一个头节点
		struct node* newNode=(struct node* )malloc(sizeof(struct node));
		newNode->next=current_head;
		newNode->data=data;
		head->next=newNode;
		return head;
	} else if(index>1 && index<=node_len)
	{
		//中间插
		for(int i=0;i<index;i++)
		{
			current_head=current_head->next;	
		}
		
		struct node* newNode=(struct node*)malloc(sizeof(struct node));
		newNode->data=data;
		newNode->next=current_head->next->next;
		current_head->next=newNode;
		return head;
	} else if(index>node_len)
	{
		//尾插
		struct node* newNode=(struct node*)malloc(sizeof(struct node));
		newNode->data=data;
		while(current_head->next!=NULL){
			
			current_head=current_head->next;
		}
		
		current_head->next=newNode;
		return head;
	}
}

void print(struct node* head)
{
	struct node* current_node=head;
	while(current_node->next!=NULL)
	{
		printf("%d\t%p\n",current_node->data,current_node->next);
	}
}

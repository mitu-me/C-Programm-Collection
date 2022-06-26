#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;	//插入的元素
	struct node* next;	//指向下一个元素
};

//插入节点
/**
 * @param data:插入的元素值
 * 尾插
 **/
void insert(struct node* head, int data);

/**
 * 统计当前链表节点的个数
 **/
int nodeCount(struct node* head);

/**
 * 修改节点，根据索引位置修改
 **/
void update(struct node* head, int index, int data);

/**
 * 删除节点,根据索引位置删除
 **/
void delete(struct node* head,int index);


//打印当前链表所有元素
void print(struct node* head);

int main()
{
	struct node* head=(struct node*)malloc(sizeof(struct node));
	if(head!=NULL)
	{
		head->next=NULL;
		head->data=-1;
	}
	
	printf("%d\t%p\n",head->data,head->next);
	for(int i=0;i<=10;i++)
	{
		insert(head,i);
	}
	
	print(head);
	printf("当前链表节点个数为:%d\n",nodeCount(head));
	printf("=======\n");
	update(head,3,30);
	print(head);
	printf("删除链表节点\n");
	delete(head,3);
	print(head);
	return 0;
}

//尾插法
void insert(struct node* head, int data)
{
	struct node* current_head=head;
	struct node* newNode=(struct node* )malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	
	//判断是否只有一个头节点
	if(current_head->next==NULL)
	{
		current_head->next=newNode;
	} else 
	{
		//否则就是有多个节点
		while(current_head->next!=NULL)
		{
			current_head=current_head->next;
		}
		current_head->next=newNode;
	}
}

void print(struct node* head)
{
	struct node* current_node=head;
	while(current_node!=NULL)
	{
		printf("当前节点值为:%d\t当前节点地址为:%p\t下一个节点的地址为:%p\n",
		current_node->data,current_node,current_node->next);
		current_node=current_node->next;
	}
}

void update(struct node* head, int index, int data)
{
	struct node* current_head=head;
	if(current_head->next==NULL)
	{	//只有一个头结点
		if(index==1)
		{	//需要修改的下标为1
			current_head->data=data;
		}
		else
		{
			printf("修改位置不合法!\n");
		}
	}
	else
	{
		//含有多个节点
		//判断下标是否合法
		if(nodeCount(head)>index)
		{
			//合法
			int move=0;
			while(move<index)
			{
				current_head=current_head->next;
				move++;	
			}
			current_head->data=data;
		}
		else
		{
			printf("修改的位置不合法!\n");
		}
	}
}

int nodeCount(struct node* head)
{
	int count=1;
	struct node* current_node=head;
	
	while(current_node->next!=NULL)
	{
		count++;
		current_node=current_node->next;
	}
	
	return count;
}

void delete(struct node* head,int index)
{
	struct node* current_head=head;
	//判断当前链表是否只有一个元素
	if(current_head->next==NULL)
	{
		if(index==1)
		{
			//需要删除头节点
			free(head);
			head=NULL;
		}
	}
	
	int move=0;
	while(move<index-1)
	{
		current_head=current_head->next;
		move++;	
	}
	
	//current_head为要删除节点的前一个节点
	current_head->next=current_head->next->next;
	free(current_head->next);	
}

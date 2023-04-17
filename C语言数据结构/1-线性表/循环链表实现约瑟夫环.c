/**
 * 循环链表实现约瑟夫环:
 * 已知 n 个人（分别用编号 1，2，3，…，n 表示）围坐在一张圆桌周围，、
 * 从编号为 k 的人开始顺时针报数，数到 m 的那个人出列；他的下一个人又从 1 开始，
 * 还是顺时针开始报数，数到 m 的那个人又出列；依次重复下去，直到圆桌上剩余一个人。
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node* next;
} Person;

//初始化
Person* init(int n);

//约瑟夫环核心:从第k个人开始，数到m就出列
void joseph(Person* person, int k, int m);

int main()
{
	printf("输入圆桌上的人数n:");
	int n;
	scanf("%d",&n);
	Person * person=init(n);
	printf("从第k人开始报数(k>1且k<%d)：",n);
	int k;
	scanf("%d",&k);
	printf("数到m的人出列：");
	int m;
	scanf("%d",&m);
	joseph(person, k, m);
	return 0;
}

Person* init(int n)
{
	Person* person=(Person* )malloc(sizeof(Person));
	if(!person) return NULL;
	
	person->number=1;
	person->next=NULL;
	
	Person* tp=person;
	for(int i=2;i<=n;i++)
	{
		Person* up=(Person* )malloc(sizeof(Person));
		up->number=i;
		up->next=NULL;
		tp->next=up;
		tp=up;
	}
	//链表尾部指向首部
	tp->next=person;
	return person;
}

void joseph(Person* person, int k, int m)
{
	Person* tp=person;
	//寻找出开始位置k
	for(int i=1;i<k;i++) tp=tp->next;
	//此时tp的指向为第k个元素
	while(tp->next!=tp)	//tp->next!=tp说明还有人
	{
		for(int j=1;j<m-1;j++) tp=tp->next;	//找到第m个人的前驱(要淘汰的人的前一个人)
		Person* eliminate=tp->next;	//eliminate:淘汰的人
		tp->next=tp->next->next;
		printf("玩家%d出局\n",eliminate->number);
		free(eliminate);
		tp=tp->next;
	}
	printf("获胜者:玩家%d\n",tp->number);
}

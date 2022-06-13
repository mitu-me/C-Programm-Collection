#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 文件定位函数void rewind(FILE* fp);  //用来将位置指针移动到文件开头
 * int fseek(FILE* fp, long offset, int origin);
 * //fp为文件指针；
 * //offset为偏移量,也就是移动的字节数
 * origin为起始位置,也就是从何处开始计算偏移量;C语言规定起始位置有三种：
 * 文件开头：SEEK_SET：0
 * 当前位置：SEEK_CUR：1
 * 文件末尾：SEEK_END：2
 *
 * 例如，把位置指针移动到离文件开头100个字节处：
 * fseek(fp,100,0)
 */

struct STU
{
    char name[20];
    int age;
    char address[20];
};

int main()
{
    FILE* fp=NULL;

    printf("sizeof(struct STU):%d\n",sizeof(struct STU));

    struct STU stu1;
    fp=fopen("d:\\demo.txt","wt+");
    if(fp==NULL)
    {
        printf("打开文件失败\n");
        exit(0);
    }

    //写入三条学生信息
    struct STU stu[3];
    for(int i=0;i<3;i++)
    {
        printf("请输入第%d个学生的姓名:",i+1);
        scanf("%s",stu[i].name);
        printf("请输入第%d个学生的年龄:",i+1);
        scanf("%d",&stu[i].age);
        printf("请输入第%d个学生的地址:",i+1);
        scanf("%s",stu[i].address);
    }

    for(int i=0;i<3;i++)
    {
        printf("%s\t%d\t%s\n",stu[i].name,stu[i].age,stu[i].address);
    }


    //将数据写入到文件中
    for(int i=0;i<3;i++)
    {
        fprintf(fp,"%s\t%d\t%s\n",stu[i].name,stu[i].age,stu[i].address);
    }

    printf("====\n");

    //重置指针
    rewind(fp);
    fseek(fp,sizeof(struct STU),SEEK_SET);
    //读取第二行的数据
    fscanf(fp,"%s\t%d\t%s\n",stu1.name,&stu1.age,stu1.address);

    printf("%s\t%d\t%s\n",stu1.name,stu1.age,stu1.address);

    return 0;
}

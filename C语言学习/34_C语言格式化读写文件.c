#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// C语言格式化读写文件

struct STU{
    char name[20];
    int age;
    char address[20];
};

int main()
{
    FILE* fp=NULL;
    struct STU stu1;

    //从键盘获取数据
    printf("请输入学生姓名:\n");
    scanf("%s",stu1.name);
    printf("请输入学生年龄:\n");
    scanf("%d",&stu1.age);
    printf("请输入学生地址:\n");
    scanf("%s",stu1.address);

    //打开文件
    fp=fopen("d:\\demo.txt","wt+");
    if(fp==NULL)
    {
        printf("打开文件失败\n");
        exit(0);
    }

    //将数据写道文件中
    fprintf(fp,"%s\t%d\t%s\n",stu1.name,stu1.age,stu1.address);
    //重置指针
    rewind(fp); //将指针从文件尾处重置到文件首部
    printf("文件写入成功...\n");

    //读取文件,将数据保存到stu2中
    struct STU stu2;
    fscanf(fp,"%s\t%d\t%s\n",stu2.name,&stu2.age,stu2.address);
    //打印输出
    printf("姓名:%s\t年龄:%d\t地址:%s\n",stu2.name,stu2.age,stu2.address);
    fclose(fp);


    return 0;
}

#include <stdio.h>

struct stu{
    char* name;
    int age;
    char* address;
};

//结构体指针作为函数参数
void averageAge(struct stu* pointer,int len);

int main()
{
    struct stu class[5]={};
    class[0].name="黑夜";
    class[0].age=22;
    class[0].address="陕西省";

    class[1].name="迷途";
    class[1].age=21;
    class[1].address="陕西省";


    class[2].name="子虚";
    class[2].age=21;
    class[2].address="四川省";


    class[3].name="小袁儿";
    class[3].age=22;
    class[3].address="山西省";


    class[4].name="深渊";
    class[4].age=22;
    class[4].address="甘肃省";

    //定义指针指向结构体数组，并使用指针访问结构图数组中的元素
    struct stu* pointer=class;
    //求出数组长度
    int len=sizeof(class)/sizeof(struct stu);

    for(pointer=class;pointer<class+len;pointer++)
    {
        printf("%s\t%d\t%s\n",pointer->name,pointer->age,pointer->address);
    }

    averageAge(class,len);

    return 0;
}

void averageAge(struct stu* pointer,int len)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        count+=(pointer+i)->age;
    }
    printf("平均年龄为:%d\n",count/4);
}

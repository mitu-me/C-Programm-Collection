#include <stdio.h>

struct stu{
    char* name;
    int age;
    char* address;
};

//�ṹ��ָ����Ϊ��������
void averageAge(struct stu* pointer,int len);

int main()
{
    struct stu class[5]={};
    class[0].name="��ҹ";
    class[0].age=22;
    class[0].address="����ʡ";

    class[1].name="��;";
    class[1].age=21;
    class[1].address="����ʡ";


    class[2].name="����";
    class[2].age=21;
    class[2].address="�Ĵ�ʡ";


    class[3].name="СԬ��";
    class[3].age=22;
    class[3].address="ɽ��ʡ";


    class[4].name="��Ԩ";
    class[4].age=22;
    class[4].address="����ʡ";

    //����ָ��ָ��ṹ�����飬��ʹ��ָ����ʽṹͼ�����е�Ԫ��
    struct stu* pointer=class;
    //������鳤��
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
    printf("ƽ������Ϊ:%d\n",count/4);
}

#include <stdio.h>

//����ṹ��
struct stu{
    char* name;
    int age;
    double score;
    char* address;
};

//�����ڶ���ṹ���ʱ��ͬʱ����ṹ�����
/**
*struct stu{
    char* name;
    int age;
    double score;
    char* address;
}stu1,stu2;

*/


int main()
{
    //����ṹ�����
    struct stu stu1,stu2;
    //�ṹ�帳ֵ
    stu1.name="mitu";
    stu1.age=22;
    stu1.score=99.9;
    stu1.address="����ʡ������";

    printf("%s\t%d\t%lf\t%s",stu1.name,stu1.age,stu1.score,stu1.address);


    return 0;
}

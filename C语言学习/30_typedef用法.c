#include <stdio.h>

// typedef���÷���C��������Ϊһ������������һ���µı�������������𡰴ºš�һ����
// ʹ�ùؼ��� typedef ����Ϊ������һ���µı�����


// typedef �� #define ������:
// typedef �ڱ�������ʱ�������� #define�������ͺ��滻֮�����һ���ؼ��Ե�����
// ��ȷ˼���������ķ������ǰ� typedef ����һ�ֳ��׵ġ���װ�����ͣ�
// ����֮���������������ӱ�Ķ�����

typedef int INT;
typedef char* string;
typedef struct stu
{
    char* name;
    int age;
}STU;

int main()
{
    string name="mitu-me";
    INT age=22;
    STU student;
    student.name=name;
    student.age=age;

    printf("name:%s\tage=%d\n",name,age);


    return 0;
}

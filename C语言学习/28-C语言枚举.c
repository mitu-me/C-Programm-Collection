#include <stdio.h>


//C����ö�ٶ��ǳ��������ܶ����ǽ��и�ֵ

//ö�ٺͺ���ʵ�ǳ����ƣ�����Ԥ����׶ν������滻�ɶ�Ӧ��ֵ��
//ö���ڱ���׶ν������滻�ɶ�Ӧ��ֵ�����ǿ��Խ�ö�����Ϊ����׶εĺꡣ
//���ǲ�ռ������������������ȫ����������ջ���Ͷ��������ڴ棬
//����ֱ�ӱ����뵽�������棬�ŵ������������Բ�����&ȡ�����ǵĵ�ַ!


enum week{Mon=1,Tues=2,Wed=3,Thurs=4,Fri=5,Sat=6,Sun=7};

int main()
{
    enum week day;
    scanf("%d",&day);

    switch(day)
    {
        case 1: puts("Monday"); break;
        case 2: puts("Tuesday"); break;
        case 3: puts("Wednesday"); break;
        case 4: puts("Thursday"); break;
        case 5: puts("Friday"); break;
        case 6: puts("Saturday"); break;
        case 7: puts("Sunday"); break;
        default: puts("Error!");
    }

    return 0;
}

#include <stdio.h>

/**
 * ָ�����������ǵ�ַ������ַ��������һ��������
 * ����ָ��������Խ��в������㣬����ӷ����������Ƚϵȡ�
 * ��Ҫ˵�����ǣ����ܶ�ָ��������г˷���������ȡ����������㣬
 * ���˻ᷢ���﷨����Ҳû��ʵ�ʵĺ���
 */
int main()
{

    int a=10;
    int* pa=&a;
    int* paa=&a;

    printf("����ĵ�ֵַΪ:\n");
    printf("&a=%#x\tpa=%#x\tppa=%#x",&a,pa,paa);
    printf("\n");
    printf("���мӷ������:\n");
    a++;
    printf("&a=%#x\tpa=%#x\tppa=%#x",&a,pa,paa);
    printf("\n");
    printf("a=%d\tpa=%d\tpaa=%d\n",a,pa,*paa);

    if(pa==paa)
    {
        printf("���\n");
    }


    return 0;
}

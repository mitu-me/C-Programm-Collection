#include <stdio.h>

// ��ʱ������ϣ����������һ�ֱ���������ֵ���ܱ��ı䣬�������������ж����̶ֹ���
// ���Ǿ����� const ������Ϊ������Constant��
// ���磬��һ����������ʾ�༶��������������߱�ʾ�������Ĵ�С��Ϊ��������һҪ��
// ����ʹ��const�ؼ��ֶԱ��������޶���
int main()
{
    const int stuNumMax=100;
    printf("%d\n",stuNumMax++); // error:increment of read-only variable 'stuNumMax'.

    return 0;
}

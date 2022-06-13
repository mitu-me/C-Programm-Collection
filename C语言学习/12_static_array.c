#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 10
#define ADD_LEN 11
#define DEL_LEN 9

/**
 * @brief C语言数组是静态的，一旦定义好之后长度是不变的，
 * 也就是不能再插入或者删除元素。
 * 如果需要插入或者删除元素，那就在创建一个新的数组
 * 
 * @return int 
 */


 /**
  * 数组元素都是紧挨着排布的，中间没有空隙，不管是插入元素还是删除元素，都得移动该元素后面的内存：
  * * 在第 i 个元素后面插入一个新元素时，第 i 个元素后面的所有元素都要往后移动一个元素的位置，
      从而给新元素腾出位置来。如果该数组后面紧跟的是其它有用数据，
      那么为了防止覆盖有用数据，还不敢直接往后移动元素，必须得重新开辟一块内存，把所有的元素都复制过去。
    
    * 删除第 i 个元素就比较简单了，不管三七二十一，把第 i 个元素后面的所有元素都向前移动即可。
  *
  * 插入和删除数组元素都要移动内存，甚至重新开辟一块内存，这是相当消耗资源的。如果一个程序中有大量的此类操作，
    那么程序的性能将堪忧，这有悖于「C语言非常高效」的初衷，所以C语言并不支持动态数组。
  *
 */

/**
 * @brief 
 *  添加一个元素:第2个位置后插入元素9
 * 1,   2,  3,      4,      5,
 * 1,   2,  3,      9       4,      5
 * 
 * 
 * @param arr 
 * @param len 
 */
//展示数组元素
void display_array_elem(int arr[],int len);

int main()
{
    int arr[ARR_LEN]={1,2,3,4,5,6,7,8,9,10};
    int add_arr[ADD_LEN];
    int del_arr[DEL_LEN];

    //添加一个元素:从原数组的第三个位置后添加一个元素的值为0
    for (int i = 0; i < ARR_LEN; i++)
    {
        if (i<3)    //小于第三个位置
        {
            add_arr[i]=arr[i];
        } else if (i==3)    //等于第3个位置
        {
            add_arr[i]=3; //将当前位置赋值为3:update_arr[i]=3;
            add_arr[i+1]=arr[i]; //将arr数组当前位置的元素赋值个给新数组update_arrd的下一个位置
        } else {    //大于第3个
            add_arr[i+1]=arr[i];
        }
    }

    display_array_elem(add_arr,11);

    printf("*******************************\n");

    //删除元素:删除索引为4的元素(i=3)
    for (int i = 0; i < 9; i++)
    {
        if (i<3)
        {
            del_arr[i]=arr[i];
        } else {    //需要删除的节点，思想是跳过arr[3]的值
            del_arr[i]=arr[i+1];
        }
    }

    display_array_elem(del_arr,9);

    return 0;
}

void display_array_elem(int arr[],int len)
{
    if (len==0)
    {
        printf("数组为空!\n");
        return;
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
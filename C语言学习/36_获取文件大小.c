#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ftell()函数用来获取文件指针距离文件开头的字节数

int main()
{
    FILE* fp=fopen("d:\\demo.txt","rb");
    if(fp==NULL)
    {
        printf("打开文件失败!\n");
        exit(0);
    }

    //保留当前文件指针的位置
    fpos_t fpos;
    fgetpos(fp,&fpos);

    //获取文件的大小
    fseek(fp,0,SEEK_END);
    int len=ftell(fp);
    printf("文件大小为:%d字节\n",len);

    //恢复到原来的位置
    fsetpos(fp,&fpos);



    fclose(fp);


    return 0;
}

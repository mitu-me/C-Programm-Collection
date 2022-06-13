#include <stdio.h>

struct stu{
    char* name;
    int age;
    char* address;
};

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


    class[4].name="混沌深渊";
    class[4].age=22;
    class[4].address="甘肃省";

    for(int i=0;i<4;i++)
    {
        printf("%s\t%d\t%s\n",class[i].name,class[i].age,class[i].address);
    }

    return 0;
}

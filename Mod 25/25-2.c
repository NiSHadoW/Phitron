#include<stdio.h>
int main()
{
    //int a=12345;
    //int* p;
    //p=&a;
    //printf("%p\n",p);
    //printf("%d\n",*p);
    int ara[3]={1,2,3};
    printf("the old way: \n");
    printf("%p\n",&ara[0]);
    printf("%p\n",&ara[1]);
    printf("%p\n",&ara[2]);

    printf("the new way: \n");
    printf("%p\n",ara);
    printf("%p\n",ara+1);
    printf("%p\n",ara+2);

    return 0;
}

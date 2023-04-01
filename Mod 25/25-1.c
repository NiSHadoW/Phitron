#include<stdio.h>
int main()
{
    /*int a,b;
    printf("%p\n",&a);
    printf("%p\n",&b);*/
    char ara[9]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++)
    {
        printf("%p\n",&ara[i]);
    }

    return 0;
}

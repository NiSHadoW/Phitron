#include<stdio.h>
int main()
{
    int a=5;
    //printf("first value: %d\n",a);
    int* p;
    int* q;
    p=&a;
    printf("Address of a is %p and value is %d: %p\n",p,*p);
    q=p;
    *q=13;
    printf("Address of a is %p and value is %d: %p\n",q,*q);
    //*p=7;
    //printf("changed value: %d\n",a);
    return 0;
}

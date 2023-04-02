#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{
    //printf("pter1=%d and ptr2=%d\n",ptr1,ptr2);
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    //printf("pter1=%d and ptr2=%d\n",ptr1,ptr2);

}
int main()
{
    //int value =20;
    //int *p=&value;
    //printf("Address of value %p\n",p);
    //printf("Value %d\n",*p);
    int arr[5]={5,10,15,20,25};
    int *ptr=&arr;
    /*printf("%d\n",*ptr);
    printf("%p\n",ptr);
    ptr++;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    ptr++;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    ptr++;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    ptr++;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);*/

   /* for(int i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }*/
    int a=10,b=20;
    swap(&a,&b);
    printf("a=%d and b=%d\n",a,b);
    return 0;
}

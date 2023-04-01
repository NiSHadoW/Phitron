#include<stdio.h>
int swap(int* m,int* n)
{
    //*m= 232332;
    //*n=2343453;
    int temp=*m;
    *m=*n;
    *n=temp;
    /*printf("Before: a=%d, b=%d\n",m,n);

    printf("After: a=%d, b=%d\n",m,n);*/
}
int main()
{
    int a=5,b=7;
    printf("a=%d, b=%d\n",a,b);
    //swap(a,b);
    swap(&a,&b);
    printf("a=%d, b=%d\n",a,b);
    return 0;
}

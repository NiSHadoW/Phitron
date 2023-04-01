/*#include<stdio.h>
int factorial(int n)
{
    if(n>0)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}*/
#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d ",n);
    }
}
int main()
{
    int x=4;
    fun(x);
    return 0;
}

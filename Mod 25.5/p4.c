/*You are given an integer n . Now print n to 1 . Implement it using recursion.
Sample Input : 4
Sample Output : 4 3 2 1*/
#include<stdio.h>
recursion_func(int x)
{
    if(x!=0)
    {
        printf("%d ",x);
        recursion_func(x-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    recursion_func(n);
    return 0;
}

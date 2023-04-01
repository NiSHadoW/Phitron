/*You are given an integer n . Now print the sum of first n natural numbers.
For example n=5 , that means sum of first n natural number is 15(1+2+3+4+5) .
Implement it using recursion.*/
#include<stdio.h>
int sum(int x)
{
    int result=0;
    if(x==0)
    {
        return 0;
    }
    else
    {
        result=x+sum(x-1);

    }
    return result;

}
int main()

{
    int n,ans;
    scanf("%d",&n);
    ans=sum(n);
    printf("%d\n",ans);
    return 0;
}

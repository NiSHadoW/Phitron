/*
You are given an integer n . Now print the sum of first n natural numbers.
For example n=5 , that means sum of first n natural number is 15(1+2+3+4+5) . Implement it using recursion.
Sample Input:
5
Sample Output:
15
*/
#include<stdio.h>
int solve(int i,int n)
{
    if(i>n)
        return 0;
    int s;
    s=solve(i+1,n);
    //printf("s=%d i=%d\n",s,i);
    return s+i;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum;
    sum=solve(1,n);

    printf("%d\n",sum);
    return 0;
}


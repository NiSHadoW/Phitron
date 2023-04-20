/*
You are given an integer n . Now print n to 1 . Implement it using recursion.
Sample Input :
5
Sample Output :
5 4 3 2 1
*/

#include<stdio.h>
void solve(int n)
{
    if(n==0)
        return;
    printf("%d\n",n);
    solve(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}



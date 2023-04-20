/*You are given an integer n . Now print 1 to n . Implement it using recursion.
Sample Input :
5
Sample Output :
1 2 3 4 5
*/

#include<stdio.h>
void solve(int i,int n)
{
    if(i>n)
        return;
    printf("%d\n",i);
    solve(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(1,n);
    return 0;
}


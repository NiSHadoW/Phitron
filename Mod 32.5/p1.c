/*You are given two positive integers n and m . Now calculate the value of n to the power m using recursion.
Sample Input :
2 5
Sample Output :
32
*/

#include<stdio.h>

int powerr(int a, int b)
{
    if(b == 0)
        return 1;
    else
        return a * powerr(a, b-1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ans = powerr(n, m);
    printf("%d", ans);
    return 0;
}

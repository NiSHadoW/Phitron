/*You are given 3 integers a, b and c .
Now print the sum of three numbers using the concept of pointer in C.
Sample Input :
10 20 30
Sample Output :
60*/
#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int* p;
    int* q;
    int* s;
    p=&x;
    q=&y;
    s=&z;
    printf("%d\n",*p+*q+*s);
    return 0;
}

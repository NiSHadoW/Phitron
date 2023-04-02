/*You are given two integer x and y. Now you have to find the average of this two integer.
Implement this by using pointers.
Sample Input:
13 2

Sample Output:
7.500
*/
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int* p;
    int* q;
    p=&a;
    q=&b;
    //printf("%d %d",*p,*q);
    float sum= (*p+*q);
    printf("%f\n",sum/2);
    return 0;
}

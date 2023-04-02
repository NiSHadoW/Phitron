/*You are given an R, the radius of a circle.
Now your task to find the area of that circles. Implement this by using function.

Sample Input:
5
Sample Output:
78.540001
*/
#include<stdio.h>
void radius(int rad)
{
    float ans;
    ans=3.141592*rad*rad;
    printf("%f\n",ans);
}
int main()
{
    int r;
    scanf("%d",&r);
    radius(r);
    return 0;
}

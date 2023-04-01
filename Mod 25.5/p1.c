/*You are given a positive integer n. The second line will contain n positive integers.
The third line will contain a value k. Now print the total count of strictly less and
strictly greater value from k. Implement it using function.
Note – In the given input, there may exist duplicate value.
Sample Input :
7
1 2 5 5 9 2 3
 5
Sample Output :
5
*/
#include<stdio.h>
int count_value(int n,int arr[],int x)
{
    int count=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
    int k;
    scanf("%d",&k);
    int ans=count_value(n,arr,k);

    printf("%d\n",ans);
    return 0;

}

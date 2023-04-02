/*You have given positive integer N, the size of an array as input. Take an array of size N as input. You have to find the
sum of those element in array which last digit is zero. Implement this by using function.
Note - It is guaranteed that each element of an array is at least 2 digit number.
Sample Input:
5
110 24 50 35 40
Sample Output:
200
*/
#include<stdio.h>
int sum(int *array,int n)
{
    int i,sum=0;
    for(i=0; i<n; i++)
    {
        if(*(array+i)%10==0)
        {
            sum+=*(array+i);
            //sum=sum+(*array);
        }

    }
    return sum;

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
    int ans=sum(arr,n);
    printf("%d\n",ans);
    return 0;

}

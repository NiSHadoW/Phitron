/*You have given positive integer N, the size of an array as input. Take an array of size N as input. Now your task to
print this array. Implement this by using pointers.
Sample Input:
5 1 2 3 4 5
Sample Output:
1 2 3 4 5
*/
#include<stdio.h>
void print_Array(int *array,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(array+i));
    }
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
    print_Array(arr,n);
    return 0;
}

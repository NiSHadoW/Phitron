/*In Bubble sort we compares two adjacent elements and swaps them until they are in the intended order.
You have given positive integer N, the size of an array as input.
Take an array of size N as input and sort this array by using Bubble sort.
You must make a function for swapping numbers by using pass by reference.
Sample Input:
5
4 3 8 2 6
Sample Output:
2 3 4 6 8
*/
#include<stdio.h>
void bubble_sort(int *array,int n)
{
    int i,j,temp;
    /*for(i=0;i<n;i++)
        printf("%d ",*(array+i));*/
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i-n-1;j++)
        {
            if(*array>*(array+i))
            {
                temp=*(array+i);
                *(array+i)=*array;
                *array=temp;
            }
        }
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
    bubble_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}







/*Write a C program to take one positive integer N, the size of an array as input.
Then take a positive integer array of size N .
And the next line will contain k . Now find the k-th largest and kth-smallest element from the array.
Implement it using function. And try to implement it using 3 functions .
1st one is for sorting , second one for finding k-th largest element and
third one for finding the kth- smallest element.See the sample output for more clarification.
Note – 1<=k<=N
Sample Input :
9
2 17 1 1 3 2 5 19 5
4

Sample Output :

4th largest element = 5

4th smallest element = 2*/
#include<stdio.h>
int sort_array(int x,int arr[])
{
    int i,j,temp=0;
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    return arr;
}
int nth_largest(int n,int arr[],int k)
{
    int i,large=0;
    for(i=n;i>0;i--)
    {
        if(i==(n-k))
        {
            large=arr[n-k];
            break;
        }
    }
    return large;
}

int nth_smallest(int n,int arr[],int k)
{
    int i,small=0;
    for(i=0;i<n;i++)
    {
        if(i==(k-1))
        {
            small=arr[k-1];
            break;
        }
    }
    return small;
}
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    //int new_arr[n];
    sort_array(n,arr);
    /*for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
    int largest=nth_largest(n,arr,k);
    int smallest=nth_smallest(n,arr,k);
    printf("%dth largest value %d\n",k,largest);
    printf("%dth smallest value %d\n",k,smallest);
    return 0;
}

#include<stdio.h>
void view_array_size(int *array,int sz)
{
    //int size=sizeof(array)/sizeof(int);
    for(int i=0;i<sz;i++)
    {
        printf("%d ",*(array+i));
    }
}
int main()
{
    int arr[]={12,20,40,60,80};
    view_array_size(arr,5);
    return 0;
}

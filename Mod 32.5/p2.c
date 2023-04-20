/*You are given a positive integer n. The next line will contain n positive integers .Now calculate the total sum in
the following way –
>> add the last digit of every integers
Implement it using recursion.
Sample Input :
4
222 13 17 1
Sample Output :
13

*/

#include<stdio.h>
int sum_of_last_digit(int arr,int n)
{
    int i=0,m=0;
    if(n==0)
        return 1;
    else
    {

        return arr[i]%10;
        i++;
        sum_of_last_digit(arr,n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    //for(int i=0;i<n;i++)
    int ans=sum_of_last_digit(arr,n);

}

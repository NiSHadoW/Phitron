/*You are given a string S of small letters ,
Now calculate the cost of the string and tell that whether the cost of the string is a power of two or not.
In this problem cost means the sum of the alphabetic order of the given string.
Alphabetic order means a = 1 , b = 2 , c = 3 .......... z = 26
And, power of two is a number of the form 2^n (2 to the power n) where n is an integer.
Now ,If the cost is a power of two print YES with cost (in this format 2^n) otherwise print NO.
Implement it using function.
Sample Input 1:
abc
Sample Output 1:
NO
Sample Input 2:
bbca
Sample Output 2:
YES
cost = 2^3
*/
#include<stdio.h>
#include<string.h>
void check_cost(int c)
{
    int i=2,tru=0;
    while(c%i==0 && c>1)
    {
        tru++;
        c=c/i;
    }
    if(c==1)
    {
        printf("YES\n");
        printf("Cost = 2^%d",tru);
    }
    else
        printf("NO\n");

}

int main()
{
    char s[10];
    scanf("%s",s);
    int cost=0,i;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        cost+=(s[i]-97)+1;;
    }
    //printf("%d",cost);
    check_cost(cost);
    return 0;
}

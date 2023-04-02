/*We give you a string. In string, every character have decimal value.
If the decimal value of character is even then make the character in uppercase. Implement this by using function.
Note - It is guaranteed that input string is always in lowercase.
Sample Input:
programming
Sample Output:
PRogRammiNg
*/
#include<stdio.h>
void change_it(char str[])
{
    int i,len;
    len=strlen(str);
    //printf("%s",str);
    for(i=0;i<len;i++)
    {
        if(str[i]%2==0)
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}
int main()
{
    char s[100];
    scanf("%s",s);
    change_it(s);
    return 0;
}

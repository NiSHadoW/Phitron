#include<stdio.h>
int g=7;
void add_two_nums()
{
    int a,b;
    printf("%d\n",g);
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d\n",sum);
    g=g+2;
}
int main()
{

    int mv=7;

    add_two_nums();
    printf("%d\n",g);
    //printf("%d\n",a);
    return 0;
}

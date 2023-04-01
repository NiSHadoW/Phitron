/*#include<stdio.h>
int main()
{
int a[3] = {80,30,100};
printf("%d", *(a+1));
}
*/
/*# include <stdio.h>
void func(int x)
{
    x = 80;
}
int main()
{
    int y = 50;
    func(y);
    printf("%d", y);
    return 0;
}
*/
/*# include <stdio.h>

void func(int* x)
{
    *x = 80;
}
int main()
{

    int y = 50;
    func(&y);
    printf("%d", y);
    return 0;

}*/
#include<stdio.h>
int main()
{
    int x= 10,*ptr;
    ptr = &x;
    *ptr += 2;
    printf("%d, %d", *ptr, x);
    return 0;

}

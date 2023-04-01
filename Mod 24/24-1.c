#include<stdio.h>
/*return_type function_name(list of parameters)
{
    //func body
}*/
/*void solve()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
}*/
int take_radius()
{
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    return r;
}
int calculate_area(int radius)
{
    float ans=3.1216*radius*radius;
    printf("area is: %f\n",ans);
    //return  ans;
}
int main()
{
    /*int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        solve();
    }*/
    //warning();
    int r;
    r=take_radius();
    calculate_area(r);

    return 0;
}

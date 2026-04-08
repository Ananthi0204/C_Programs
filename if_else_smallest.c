#include<stdio.h>
int main()
{
    int a=5;
    int b=10;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
    printf("smallest=%d",a);
    }
    else
    {
    printf("smallest=%d",b);
    }
    return 0;
}
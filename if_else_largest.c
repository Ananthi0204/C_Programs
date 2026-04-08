#include<stdio.h>
int main()
{
    int a=5;
    int b=10;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
    printf("largest=%d",a);
    }
    else
    {
    printf("largest=%d",b);
    }
    return 0;
}
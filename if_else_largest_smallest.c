#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("Enter two no:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
    printf("largest=%d\n",a);
    printf("smallest=%d",b);
    }
    else
    {
    printf("largest=%d\n",b);
    printf("smallest=%d",a);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("Enter the value:");
    if(a%2==0)
    {
        printf("Even");
    }
    if(a%2!=0)
    {
        printf("odd");
    }
    return 0;
}
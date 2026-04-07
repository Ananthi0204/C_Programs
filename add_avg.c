#include<stdio.h>
int main()
{
    int a,b,sum;
    float avg;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    sum=a+b;
    avg=(a+b)/2.0;
    printf("Sum=%d\n",sum);
    printf("Average=%.2f",avg);
    return 0;
}
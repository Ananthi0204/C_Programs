#include<stdio.h>
int main()
{
	int i,n,a[100],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=0;
	for(i=0;i<n;i++)
	if(a[i]>max)
	max=a[i];
	printf("%d",max);
	return 0;
}
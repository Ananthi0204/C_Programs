#include<stdio.h>
int main()
{
	int i,n,key;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	{
	printf("Element found");
	return 0;
	}
}
	printf("Element not found");
	return 0;
}

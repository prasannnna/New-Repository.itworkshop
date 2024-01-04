#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the no.of elememts in array :");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	printf("enter the elements in array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of elements in array : %d",sum);
}

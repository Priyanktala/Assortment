#include<stdio.h>
main()
{
	int i,j,n;
	int a[100];
	
	printf("Enter the value=");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Element=");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("\nNegative Element=%d",a[i]);
		}	
	}
	
}
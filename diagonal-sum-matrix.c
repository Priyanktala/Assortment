#include<stdio.h>
main()
{
	int a[10][10]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sum=0;
	
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	printf("\n\nDiagonal Sum is=%d",sum);
	
}
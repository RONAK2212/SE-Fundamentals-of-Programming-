#include<stdio.h>
main(){
	int i,j,arr[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter your value [%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);		}
	}
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");	
	}
}

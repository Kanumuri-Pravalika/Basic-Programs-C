#include<stdio.h>
void main()
{
	int i,j,k=1,r;
	printf("Enter number of row : ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%-5d",k);
			k++;
		}
		printf("\n");
	}
}

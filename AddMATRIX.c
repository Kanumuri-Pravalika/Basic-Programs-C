#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],c[5][5];
	int i,j,r1,r2,c1,c2;
	printf("Enter the dimensions of first matrix :");
	scanf("%d%d",&r1,&c1);
	printf("Enter the dimensions of second matrix :");
	scanf("%d%d",&r2,&c2);
	if(r1==c1&&r2==c2)
	{	
    	printf("Enter the elements of first matrix :");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of second matrix :");
		{
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					scanf("%d",&b[i][j]);
				}
			}
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
				}
			}
			printf("Resultant matrix :\n");
			{
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						printf("%5d",c[i][j]);
					}
					printf("\n");
				}
			}
		}
	}
	else
	{
		printf("Matrix addition is not possible");
	}
}

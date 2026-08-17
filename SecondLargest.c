#include<stdio.h>
void main()
{
	int age1,age2,age3;
	printf("Enter three persons ages : ");
	scanf("%d%d%d",&age1,&age2,&age3);
	if((age1>age2&&age1<age3)||(age1<age2&&age1>age3))
	{
		printf("second largest person is %d",age1);
	}
	else if((age2>age1&&age2<age3)||(age2<age1&&age2>age3))
	{
		printf("Second largest person is %d",age2);
	}
	else
	{
		printf("Second largest person is %d",age3);
	}
}

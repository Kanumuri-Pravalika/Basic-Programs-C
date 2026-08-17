#include<stdio.h>
int main() 
{
	int i,n,dig,s=0;
	printf("enter number:");
	scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
	{
		dig=i%10;
		s=s+dig*dig*dig;
	}
   if(s==n)
        printf("armstrong number");
    else
	    printf("not a armstrong number");
	    
}

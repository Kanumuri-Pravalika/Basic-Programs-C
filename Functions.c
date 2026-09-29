#include<stdio.h>
void checkprime(int);
void main()
{
	int n;
	printf("Enter any positive integers : ");
	scanf("%d",&n);
	checkprime(n);
}
void checkprime(int num)
{
   int c=0,i;
   for(i=1;i<=num;i++)
   {
   	   if(num%i==0)
   	   c++;
   } 
   if(c==2)
       printf("Prime number ");
    else
       printf("Not a prime number ");
}

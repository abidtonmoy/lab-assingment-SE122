#include<stdio.h>
int main()
{
	
	int n,i,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    printf(" %d\n",i);
		sum=sum+i;
	}
	printf("Sum of natural number : %d",sum);
	
	
	return 0;
}

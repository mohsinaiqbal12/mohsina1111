#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		printf("%d*%d=%d",n,i,n*i);
	    ++i;
	}
	return 0;
}
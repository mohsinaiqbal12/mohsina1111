#include<stdio.h>
int main()
{
	int x;
	printf("enter any number to check it even or odd");
	scanf("%d",&x);
	
		switch(x%2)
	{
		if (x%2==0)
		case 0:
			printf("number is even");
			break;
		if (x%2==1)
		case 1:
			printf("number is odd");
			break;
		default:
			printf("none");
		}
	return 0;
}
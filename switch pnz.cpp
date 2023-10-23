#include<stdio.h>
int main()
{
	int x;
	printf("enter number to check it is positive,negative or zero");
	scanf("%d",&x);
	switch(x)
	{
		if(x>0)
		case 1:
			printf("positive");
			break;
		if(x<0)
		case 2:
			printf("negative");
	        break;
	    default:
	        printf("zero");
	}
	return 0;
}
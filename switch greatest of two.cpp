#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	switch(a>b)
	{
		case 0:
			printf("b is greater");
			break;
		case 1:
			printf(" a is greater");
			break;
		default:
			printf("none");
	}
	return 0;
}
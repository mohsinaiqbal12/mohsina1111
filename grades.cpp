#include<stdio.h>
int main()
{
	int num1 , num2 , num3 , num4 , num5 , percentage,grade;
	printf("enter marks in sub 1");
	scanf("%d",&num1);
	printf("enter marks in sub 2");
	scanf("%d",&num2);
	printf("enter marks in sub 3");
	scanf("%d",&num3);
	printf("enter marks in sub 4");
	scanf("%d",&num4);
	printf("enter marks in sub 5");
	scanf("%d",&num5);
	printf("percentage of student %d",(num1+num2+num3+num4+num5/500)*100);
	
		if(grade>=75)
	{
			printf("grade A");
	}
	else
	
		if(grade>60)
	{
			printf("grade B");
	}
	else
	
		if(grade>50)
	{
			printf("grade C");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
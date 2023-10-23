#include<stdio.h>
int main()
{
	float wt,ht,BMI;//wt in pounds lb and ht in inches in.
	printf("enter wt in pounds");
	scanf("%f",&wt);
	printf("enter ht in inches");
	scanf("%f",&ht);
	BMI=703*wt/ht*ht;
	printf("%f",&BMI);
	if(BMI<18.5)
	printf("underweight");
	if(25.0<=BMI<=29.9)
	printf("overweight");
	else
	printf("obese");
	return 0;
}
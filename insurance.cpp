#include<stdio.h>
int main()
{
	int age;
	char gender[1],MS[1];
	printf("enter age");
	scanf("%d",&age);
	printf("enter gender");
	scanf("%s", gender);
	printf("enter MS");
	scanf("%s", MS);
	if(MS==married)
	printf("insured");
	if(MS==unmarried){
		if(age>30){
		printf("insured");
	}
	}
	else
	{
		printf("not insured");
	}
	if(MS==unmarried)
{
	if(age>25)
	{
		printf("insured");
	}
}
else{
	printf("not insured");
}
	return 0;
}
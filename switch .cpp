#include<stdio.h>
int main(){
	int x;
	printf("enter the number to check even or odd");
	scanf("%d",&x);
	
	switch(x)
	{
		case 0:
			printf("even no");
			break;
		case 1:
			printf("odd no");
			break;
		default:
			printf("none");
	}
	return 0;
}
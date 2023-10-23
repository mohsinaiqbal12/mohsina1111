#include<stdio.h>
void cube();
int main()
{
	
	cube();
	cube();
	
	return 0;
}
  void cube()
  {
  	int x;
  	printf("enter the number");
  	scanf("%d",&x);
  	int n=x*x*x;
  	printf("%d",&x);
  }
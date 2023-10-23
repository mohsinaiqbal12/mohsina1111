#include<stdio.h>
int area(int,int);
int main()
{
	int x,y;
	printf("enter length");
	scanf("%d",&x);
	printf("enter breadth");
	scanf("%d",&y);
	int z = (x*y);
	printf("%d",&z);
	return 0;
}
   int area(int x,int y)
   {
   	int m=x*y;
   	return m;
   }
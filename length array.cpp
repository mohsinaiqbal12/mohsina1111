#include<stdio.h> 
int main(){
	int a[9]={2,4,3,4,5,7,9,1,3};
	int i;
	//original order
	for(i=0;i<9;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	
	//reverse order
	for(i=8;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
}
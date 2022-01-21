#include <stdio.h>
int main(){
	int height;
	printf("enter your height:");
	scanf("%d",&height);
	
	if (height<140){
		printf("you are dwarf");
	}
	else if(140<height<170){
		printf("you are average");
	}
	else{
		printf("you are tall");
	}
}

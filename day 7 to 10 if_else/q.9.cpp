#include <stdio.h>
int main(){
	int temp;
	printf("Enter the temperature:");
	scanf("%d",&temp);
	
	if (temp<0){
		printf("freezing weather");
	}
	else if (0<temp>10){
		printf("very cold weather");
	}
	else if (10<temp>20){
		printf("cold weather");
	}
	else if (20<temp>30){
		printf("normal weather");
	}
	else if (30<temp>40){
		printf("hot weather");
	}
	else if (temp>=40){
		printf("very hot weather");
	}
}

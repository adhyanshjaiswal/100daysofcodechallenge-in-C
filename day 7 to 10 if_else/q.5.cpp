#include <stdio.h>
int main(){
	int x,y;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	if (x>0 and y>0){
		printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
	}
	else if (x<0 and y>0){
		printf("The coordinate point (%d,%d) lies in the Second quadrant.",x,y);
	}
	if (x<0 and y<0){
		printf("The coordinate point (%d,%d) lies in the Third quadrant.",x,y);
	}
	if (x>0 and y<0){
		printf("The coordinate point (%d,%d) lies in the Forth quadrant.",x,y);
	}
}

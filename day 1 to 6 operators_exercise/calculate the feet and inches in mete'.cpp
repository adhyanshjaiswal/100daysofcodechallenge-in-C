#include <stdio.h>
int main(){
	float meter,feet,inches;
	printf("Enter the value of meter:");
	scanf("%f",&meter);
	
	feet=meter*39.37;
	inches=meter*3.975;
	printf("the value of feet is %0.2f \nthe value of inches is %0.2f",feet,inches);
}

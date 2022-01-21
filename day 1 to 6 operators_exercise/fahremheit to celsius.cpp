#include <stdio.h>
int main(){
	float celsius,fahremheit;
	printf("Enter the value of fahremheit:");
	scanf("%f",&fahremheit);
	
	celsius=(fahremheit-32)*5/9;
	printf("the value of feet is %0.2f ",celsius);
}

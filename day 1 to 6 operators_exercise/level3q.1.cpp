#include <stdio.h>
int main(){
	int a,sum=0,first,second_last;
	printf("Enter the 5 digit number:");
	scanf("%d",&a);
	
	
    first = a/10000;    
    
    second_last=(a/10)%10;

	
	sum=first+second_last;
	
	printf("the sum of 1st and the 2ns last digit is %d", sum);
}

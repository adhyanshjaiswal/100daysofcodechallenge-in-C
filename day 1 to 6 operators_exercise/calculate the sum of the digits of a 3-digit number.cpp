#include <stdio.h>
int main(){
	int a,sum=0,first,second , third;
	printf("Enter the three digit number:");
	scanf("%d",&a);
	
	
    first = a/100;    
    
    second=(a/10)%10;
    third=a%10;
    

	
	sum=first+second+third;
	
	printf("the sum of 1st and the 2ns last digit is %d", sum);
}

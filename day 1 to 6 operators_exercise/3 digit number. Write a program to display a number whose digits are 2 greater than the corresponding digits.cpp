#include <stdio.h>
int main(){
	int a,first,second , third,reverse;
	printf("Enter the three digit number:");
	scanf("%d",&a);
	
	
    first = (a/100)+2;   
    second=((a/10)%10)+2;
    third=(a%10)+2;
    

	
	reverse=first*100+second*10+third;
	
	printf("the sum of 1st and the 2ns last digit is %d", reverse);
}

#include <stdio.h>
int main(){
	int a,first,second , third,reverse;
	printf("Enter the three digit number:");
	scanf("%d",&a);
	
	
    first = a/100;    
    second=(a/10)%10;
    third=a%10;
    

	
	reverse=third*100+second*10+first;
	
	printf("the sum of 1st and the 2ns last digit is %d", reverse);
}

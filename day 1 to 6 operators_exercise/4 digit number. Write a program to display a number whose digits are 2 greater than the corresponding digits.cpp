#include <stdio.h>
int main(){
	int a,first,second , third,forth,result;
	printf("Enter the four digit number:");
	scanf("%d",&a);
	
	
    first = (a/1000)+2;  
    second=((a/100)%10)+2;
    third=((a/10)%10)+2;
    forth=(a%10)+2;
    

	
	result=first*1000+second*100+third*10+forth;
	
	printf("the sum of 1st and the 2ns last digit is %d", result);
}

#include <stdio.h>
int main()
{
	int num1,num2,i=1,gcd;
	
	printf("Enter 1st number:");
	scanf("%d",&num1);
	printf("Enter 2nd number:");
	scanf("%d",&num2);
	
	while(i<=num1 and i<=num2){
		if(num1%i==0 and num2%i==0){
			gcd=i;
		i++;
		
		}
	}
	printf("%d",gcd);
	return 0;
	
	
}

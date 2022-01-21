#include <stdio.h>
int main()
{
	int lcm,num1,num2,i=1;
	
	printf("Enter 1st number:");
	scanf("%d",&num1);
	printf("Enter 2nd number:");
	scanf("%d",&num2);
	
	lcm=(num1 > num2) ? num1 : num2;
	
	while(i){
		
		if(lcm%num1==0 && lcm%num2==0){
			printf("Lcm of %d and %d is %d",num1,num2,lcm);
			i=0;
		}
		lcm++;
		
	}
}

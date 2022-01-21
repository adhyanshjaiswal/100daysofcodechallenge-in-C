#include <stdio.h>
int main()
{
	int num1,num2,lcm,i;
	
	printf("enter two integer:");
	scanf("%d %d",num1,num2);
	
	lcm=(num1>num2) ? num1 : num2 ;
	
	while(1){
		if(lcm%num1==0 && lcm%num2==0){
			printf("lcm of %d and %d is %d",num1,num2,lcm);
			i=0;
		}
		lcm++;
	}
}

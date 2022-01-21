#include <stdio.h>
int main()
{
	int num1,num2,gcd,min;
	
	printf("Enter two integers:-");
	scanf("%d %d",&num1,&num2);
	
	min=(num1>num2) ? num1 : num2;
	
	for(int i;i<=min;i++){
		if(num1%i==0 and num2%i==0){
			gcd=i;
		}
	}
	printf("H.C.F of %d and %d is %d",num1,num2,gcd);
}

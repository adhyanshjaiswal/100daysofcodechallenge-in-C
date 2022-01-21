#include <stdio.h>
int main()
{
	int value=1,base,exponent;
	printf("Enter the base:");
	scanf("%d",&base);
	printf("Enter the exponent:");
	scanf("%d",&exponent);
	
	while(exponent!=0){
		value*=base;
		--exponent;
	}
	printf("result is %d",value);
}

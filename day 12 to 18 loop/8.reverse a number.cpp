#include <stdio.h>
int main()
{
	int num,x,reversed=0;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	while(num!=0){
		x=num%10;
		num=num/10;
		reversed=reversed*10 + x;
	}
	printf("Reversed is %d",reversed);
}

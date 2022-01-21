#include <stdio.h>
int main()
{
	int num,x,reversed=0,original;
	
	printf("Enter a number:");
	scanf("%d",&num);
	original=num;
	
	while(num!=0){
		x=num%10;
		
		reversed=reversed*10 + x;
		num=num/10;
		
	}
	if(reversed==original)
	{
		printf("This %d is palindrome",reversed);
	}
	else{
		printf("This %d is not palindrome",reversed);
	}
}

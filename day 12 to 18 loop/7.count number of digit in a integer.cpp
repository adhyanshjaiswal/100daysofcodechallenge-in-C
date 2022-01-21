#include <stdio.h>
int main()
{
	int count=0,num;
	printf("enter a number:");
	scanf("%d",&num);
	
	while(num!=0){
		count++;
		num=num/10;
	}
	printf("Total number of digit is %d",count);
}

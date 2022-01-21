#include<stdio.h>
int main()
{
	int a,b,c,total;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	total = a+b+c;
	if (total==180){
		printf("Triangle is valid");
	}
	else{
		printf("triangle is not valid");
	}
	
}

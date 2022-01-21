#include <stdio.h>
int main(){
	char i;
	int a,b,result;
	printf("Enter the geometrical shape name:");
	scanf("%c",&i);
	switch(i){
	case 's':
		printf("Enter the first number:");
		scanf("%d",&a);
		printf("Enter the second number:");
		scanf("%d",&b);
		printf("sum of the two number is %d",result=a+b);
		break;
	case 't':
		printf("Enter the first number:");
		scanf("%d",&a);
		printf("Enter the second number:");
		scanf("%d",&b);
		printf("Subtraction of the two number is %d",result=a+b);
		break;
	case 'm':
		printf("Enter the first number:");
		scanf("%d",&a);
		printf("Enter the second number:");
		scanf("%d",&b);
		printf("Multiplication of the two number is %d",result=a*b);
		break;
	case 'd':
		printf("Enter the first number:");
		scanf("%d",&a);
		printf("Enter the second number:");
		scanf("%d",&b);
		printf("Division of the two number is %d",result=a/b);
		break;
	}
}

#include<stdio.h>
int main(){
	int actual,sale,amount;
	printf("Enter the actual price:");
	scanf("%d",&actual);
	printf("Enter the Sale price:");
	scanf("%d",&sale);
	
	if (actual>sale){
		amount=actual-sale;
		printf("The total loss is %d",amount);
	}
	else if (sale>actual){
		amount=sale-actual;
		printf("The total profit is %d",amount);
	}
	else{
		printf("There is no loss or no profit");
	}
}

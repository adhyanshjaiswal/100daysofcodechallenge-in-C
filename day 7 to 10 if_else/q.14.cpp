#include <stdio.h>
int main(){
	int actual , sale, amount;
	printf("Enter the actual price of product:");
	scanf("%d",&actual);
	printf("Enter the sale price of product:");
	scanf("%d",&sale);
	if (actual>sale){
		amount=actual-sale;
		printf("Total loss is %d",amount);		
	}
	else if (sale>actual){
		amount=sale-actual;
		printf("Total profit is %d",amount);
	}
    else{
    	printf("Equal");
	}
	

}

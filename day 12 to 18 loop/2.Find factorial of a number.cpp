#include <stdio.h>
int main(){
	int fact=1,n,i;
	
	printf("Enter the postive number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("The factorial of %d is %d",n,fact);
	
	if(i<1){
		printf("The factorial is not exist of negative number");
	}
	
}

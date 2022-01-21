#include <stdio.h>
int main(){
	int i;
	printf("Enter a digit:");
	scanf("%d",&i);
	
	switch(i){
		
		case 0:
			printf("Zero");
			break;
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
			
		default:
			printf("No digit found");
	}
}

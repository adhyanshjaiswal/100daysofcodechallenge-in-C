#include <stdio.h>
int main(){
	int i;
	printf("Enter a digit:");
	scanf("%d",&i);
	
	switch(i){
		
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
			
		default:
			printf("No Day number is found");
	}
}

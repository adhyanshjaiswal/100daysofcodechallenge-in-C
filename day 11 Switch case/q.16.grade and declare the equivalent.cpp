#include <stdio.h>
int main(){
	char i;
	printf("Enter Your Grade:");
	scanf("%c",&i);
	
	switch(i){
		case 'E':
			printf("Excellent");
			break;
		case 'V':
			printf("Very Good");
			break;
		case 'G':
			printf("Good");
			break;
		case 'A':
			printf("Average");
			break;
		case 'F':
			printf("Fails");
			break;
		default:
			printf("Grade is not in list");
	}
}

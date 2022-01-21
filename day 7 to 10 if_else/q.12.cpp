#include <stdio.h>
int main(){
	char character;
	printf("Enter the character:");
	scanf("%c",&character);
	
	if ((character>='a' and character<='z') or (character>='A' and character<='Z')){
		printf("The Given Character is an Alphabet");
	}
	else if (character >= '0' and character <= '9'){
		printf("The Given Character is a digit");
	}
    else{
	printf("The Given Character s a Special Character");
	}
}

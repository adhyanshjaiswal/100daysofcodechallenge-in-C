#include <stdio.h>
int main(){
	char character;
	printf("Enter the character:");
	scanf("%c",&character);
	
	if(character=='a' or character=='e' or character=='i' or character=='o' or character=='u' or character=='A'or character=='E' or character=='I' or character=='O' or character=='U'){
		printf("The alphabet is a  VOWEL");
	}
    else{
	printf("The alphabet is a consonant.");
	}
}

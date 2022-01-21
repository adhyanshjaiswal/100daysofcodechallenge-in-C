#include <stdio.h>
int main(){
	int i,j,k;
	printf("Enter 1st number:");
	scanf("%d",&i);
	printf("Enter 2nd number:");
	scanf("%d",&j);
	printf("Enter 3rd number:");
	scanf("%d",&k);
	
	if(i>j && i>k)
	{
		printf("i is greatest number");
	}
	else if(j>k && j>i)
	{
		printf("j is greatest number");
	}
	else
	{
		printf("k is greatest number");
	}
	
}

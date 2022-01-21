#include <stdio.h>
int main(){
	int i,j,k;
	printf("Enter the value of i:");
	scanf("%d",&i);
	printf("Enter the value of j:");
	scanf("%d",&j);
	printf("Enter the value of k:");
	scanf("%d",&k);
	if (i==j && i==k && j==k ){
		printf("triangle is equilateral");
	}
	else if (i==j || i==k || j==k){
		printf("triangle is isoceles");
	}
	else {
		printf("triangle is scalene");
	}
}

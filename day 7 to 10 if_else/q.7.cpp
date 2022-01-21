#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	
	d=b*b-4*a*c;
	printf("%d\n",d);
	
	if (d>0){
		printf("Root are real");
	}
	else if(d<0){
		printf("d=%d,Root are imaginary");
	}
	else{
		printf("%d,root are equal");
	}
}

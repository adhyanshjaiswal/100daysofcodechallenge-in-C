#include <stdio.h>
int main(){
	int roll,m,p,c ,total, division;
	char name;
	float percentage;
	printf("Enter your roll number:");
	scanf("%d",&roll);
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter the marks in maths:");
	scanf("%d",&m);
	printf("Enter the marks in physics:");
	scanf("%d",&p);
	printf("Enter the marks in chemistry:");
	scanf("%d",&c);
	
	total=m+p+c;
	percentage=(float)total/3;
	printf("%d \n%0.2f",total,percentage);
	
}

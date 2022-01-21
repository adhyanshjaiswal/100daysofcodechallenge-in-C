#include <stdio.h>
int main()
{
	int num,c,arm=0,r;
	printf("Enter a number:");
	scanf("%d",&num);
	
	// 153=1*1*1 + 5*5*5 + 3*3*3
	c=num;
	while(num>0){
		r=num%10;
		arm=(r*r*r) + arm;
		num=num/10;
	}
	if(c==arm){
		printf("This %d is an armstring number",arm);
	}
	else{
		printf("This %d is not an armstring number",arm);
	}
}

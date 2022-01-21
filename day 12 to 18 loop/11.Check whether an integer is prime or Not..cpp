#include <stdio.h>
int main()
{
	int num,i,m,flag=0;
	printf("Enter a number:");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		if(num%i==0){
			flag++;
			break;
		}
	}
	if(flag==0){
		printf("prime");
	}
	else{
		printf("Not Prime");
	}
}

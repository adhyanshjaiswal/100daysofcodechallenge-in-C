#include <stdio.h>
int main(){
	char i;
	int l,b,area,r;
	printf("Enter the geometrical shape name:");
	scanf("%c",&i);
	switch(i){
	case 'r':
		printf("Enter the length:");
		scanf("%d",&l);
		printf("Enter the width:");
		scanf("%d",&b);
		printf("area of rectangle is %d",area=l*b);
		break;
	case 'c':
		printf("Enter the radius:");
		scanf("%d",&r);
		printf("area of circle is %d",area=3.14*r*r);
		break;
	case 's':
		printf("Enter the side:");
		scanf("%d",&b);
		printf("area of Square is %d",area=b*b);
		break;
	}
}

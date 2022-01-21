#include <stdio.h>
int main(){
	int x=0,y=1,z,i;
	z=x+y;
	
	while (y<=50){
		printf("%d \t",y);
		z=x+y;
		x=y;
		y=z;
	}
}

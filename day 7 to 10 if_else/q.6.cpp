#include <stdio.h>
int main(){
	int maths, physics,chemistry,alltotal,totalmp;
	printf("Enter the marks of maths:");
	scanf("%d",&maths);
	printf("Enter the marks of physics:");
	scanf("%d",&physics);
	printf("Enter the marks of chemistry:");
	scanf("%d",&chemistry);
	alltotal=maths+physics+chemistry;
	totalmp=maths+physics;
	if (maths >=65 and physics >=55 and chemistry>=50 and alltotal>=190 and totalmp>137);
		printf("The candidate is  eligible for admission");
	}
	else {
		printf("The candidate is not eligible for admission");
	}
}

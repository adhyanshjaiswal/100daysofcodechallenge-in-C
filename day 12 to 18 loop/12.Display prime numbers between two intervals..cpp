#include <stdio.h>
int main(){
   int num1,num2,i,j,flag;
   printf("enter the two intervals:");
   scanf("%d %d",&num1,&num2);
   printf("prime no�s present in between %d and %d:",num1,num2);
   for(i=num1;i<num2;i++){
      flag=0;
      for(j=2;j<=i/2;++j){ 
         if(i%j==0){
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d\n",i);
   }
   return 0;
}

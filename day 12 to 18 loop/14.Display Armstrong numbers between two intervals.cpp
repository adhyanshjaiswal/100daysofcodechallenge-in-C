#include <stdio.h>
int main()
{
  int num1, num2, i, c, arm, r;
  printf("Enter two numbers intervals: ");
  scanf("%d %d", &num1, &num2);
  printf("Armstrong numbers between %d an %d are: ", num1, num2);
  for(i=num1+1; i<num2; ++i)
  {
      c=i;
      arm=0;
      while(c!=0)
      {
          r=(c%10);
          arm=(r*r*r) + arm;
          c=c/10;
      }
      if(i==arm)
      {
          printf("%d ",i);
      }
  }
  return 0;
}

#include <stdio.h>

double factorial(unsigned int i){
  if(i<=1){
    return i;
  }
  return i * factorial(i - 1);
}
int main1(int argc, char const *argv[])
{
  int i = 30;
  printf("%d的阶乘 %f\n", i,factorial(i));   
  return 0;
}


int fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}

int main(int argc, char const *argv[])
{
  int i;
  for ( i = 0; i < 10; i++)
  {
    printf("%d\n", fibonaci(i));
  }
  
  return 0;
}

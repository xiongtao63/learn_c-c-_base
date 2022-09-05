#include <stdio.h>

double factorial(unsigned int i){
  if(i<=1){
    return i;
  }
  return i * factorial(i - 1);
}
int main(int argc, char const *argv[])
{
  int i = 5;
  printf("%d的阶乘 %f\n", i,factorial(i));   
  return 0;
}
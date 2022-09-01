/*
 * @Author       : xiongtao
 * @Date         : 2022-08-31 16:06:39
 * @LastEditTime : 2022-08-31 17:44:59
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main1()
{
   /* 我的第一个 C 程序 */
   printf("Hello, World!s \n");
   return 0;
}
int main(int argc, char const *argv[])
{

  if(argc < 2){
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return 1;
  }
  double inputValue = atof(argv[1]);
  double outputValue = sqrt(inputValue);
  fprintf(stdout, "The square root of %g is %g\n", inputValue, outputValue);

  return 0;
}





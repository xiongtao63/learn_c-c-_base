/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 17:03:37
 * @LastEditTime : 2022-09-02 17:08:32
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int sum = 17, count = 5;
  double mean;
  mean = (double)sum / count;

  char c = 'c';
  float ss;
  ss = sum + c;
  printf("======%d\n", ss);

  printf("Value of mean : %f\n", mean);
  return 0;
}

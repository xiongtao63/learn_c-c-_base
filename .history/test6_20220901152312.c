/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 15:20:55
 * @LastEditTime : 2022-09-01 15:23:11
 * @LastEditors  : xiongtao
 * @Logs         : 算术运算符
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 21;
  int b = 10;
  int c;
  c = a + b;
  printf("Line1 - c的值为%d\n", c);
  c = a - b;
  printf("Line1 - c的值为%d\n", c);
  c = a * b;
  printf("Line1 - c的值为%d\n", c);
  c = a / b;
  printf("Line1 - c的值为%d\n", c);
  c = a % b;
  printf("Line1 - c的值为%d\n", c);
  c = a++;
  printf("Line1 - c的值为%d\n", c);
  c = a--;
  printf("Line1 - c的值为%d\n", c);
  return 0;
}


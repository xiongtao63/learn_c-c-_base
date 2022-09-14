/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 09:46:36
 * @LastEditTime : 2022-09-05 09:51:10
 * @LastEditors  : xiongtao
 * @Logs         : 可变参数
 *
 */

#include <stdarg.h>
#include <stdio.h>

double average(int num, ...)
{
  va_list valist;
  double sum = 0.0;
  int i;
  /* 为 num 个参数初始化 valist */
  va_start(valist, num);
  /* 访问所有赋给 valist 的参数 */
  for (int i = 0; i < num; i++)
  {
    sum += va_arg(valist, int);
  }
  va_end(valist);
  return sum / num;
}

int main(int argc, char const *argv[])
{
  printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
  printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
  return 0;
}

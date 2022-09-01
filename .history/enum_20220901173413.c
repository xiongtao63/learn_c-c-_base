/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 17:06:45
 * @LastEditTime : 2022-09-01 17:34:13
 * @LastEditors  : xiongtao
 * @Logs         : 枚举
 *
 */
#include <stdio.h>

enum DAY
{
  MON = 1,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
  SUN
} day;

int main1(int argc, char const *argv[])
{

  enum DAY day;
  day = WED;
  printf("%d",day);
  return 0;
}

int main(int argc, char const *argv[])
{

  for ( day = MON; day < SUN; day++)
  {
    printf("枚举元素：%d \n",day);
  }
  return 0;
}
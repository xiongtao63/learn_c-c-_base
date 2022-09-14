/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 10:56:27
 * @LastEditTime : 2022-09-05 10:57:37
 * @LastEditors  : xiongtao
 * @Logs         : 命令行参数
 *
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  if (argc == 2)
  {
    printf("The argument supplied is %s\n", argv[0]);
    printf("The argument supplied is %s\n", argv[1]);
  }
  else if (argc > 2)
  {
    printf("Too many arguments supplied.\n");
  }
  else
  {
    printf("One argument expected.\n");
  }
  return 0;
}

/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 16:59:02
 * @LastEditTime : 2022-09-01 17:01:35
 * @LastEditors  : xiongtao
 * @Logs         : 数组
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n[10];
  int i, j;
  for (i = 0; i < 10; i++)
  {
    n[i] = i + 100;
  }
  for (j = 0; j < 10; j++)
  {
    printf("Element[%d] = %d\n", j, n[j]);
  }
  
  return 0;
}


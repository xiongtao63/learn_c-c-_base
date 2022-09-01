/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 16:29:56
 * @LastEditTime : 2022-09-01 16:32:09
 * @LastEditors  : xiongtao
 * @Logs         : 函数
 * 
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int result = max(3, 5);
  printf("result====%d", result);
  return 0;
}

int max(int a,int b){
  int result;
  if(a > b)
    result = a;
  else
    result = b;
  return result;
}


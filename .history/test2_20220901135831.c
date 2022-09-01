/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 09:53:03
 * @LastEditTime : 2022-09-01 13:58:31
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */
#include <stdio.h>
#include <float.h>

int main1(int argc, char const *argv[])
{
  printf("int 存储大小： %lu \n", sizeof(int));
  return 0;
}

int main2(int argc, char const *argv[])
{
  printf("float 存储最大字节数 : %lu\n", sizeof(float));
  printf("float 最小值 : %E\n", FLT_MIN);
  printf("float 最大值 : %E\n", FLT_MAX);
  printf("float 精度值 : %d\n", FLT_DIG);
  return 0;
}

int main(int argc, char const *argv[])
{
  int result;
  result = addtwonum();
  printf("result : %d", result);
  return 0;
}

int x;
int y;

int addtwonum(){
  // 函数内声明变量 x 和 y 为外部变量
  extern int x;
  extern int y;
  x = 1;
  y = 2;
  return x + y;
}





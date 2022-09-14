/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 14:49:54
 * @LastEditTime : 2022-09-05 14:51:15
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  // 在c语言中，指针和数组名都表示地址
  //数组是一块内存连续的数据。
  //指针是指向内存空间的变量。
  int a[] = {11, 22, 33, 44, 55};
  //直接输出数组名会得到数组首元素的地址
  printf("%#x\n", a);
  printf("%#x\n", &a[0]);
  printf("%d\n", *a);
 printf("====\n");
  int *p = a;
  //数组指针


  return 0;
}

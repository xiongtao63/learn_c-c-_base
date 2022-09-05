/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 09:27:52
 * @LastEditTime : 2022-09-02 09:29:29
 * @LastEditors  : xiongtao
 * @Logs         : 指针
 * 
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 10;
  int *p;
  p = &i;

  printf("i的地址是%p",p);
  return 0;
}

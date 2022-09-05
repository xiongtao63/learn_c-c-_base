/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 09:27:52
 * @LastEditTime : 2022-09-02 10:07:11
 * @LastEditors  : xiongtao
 * @Logs         : 指针
 * 
 */
#include <stdio.h>

int main1(int argc, char const *argv[])
{
  int i = 10;
  int *p;
  p = &i;

  printf("i的地址是%p",p);
  return 0;
}

int main(int argc, char const *argv[])
{
  int a = 20;
  int *p;
  p = &a;

  printf("a变量的地址是 %p", &a);
  printf("p变量存储的地 %p", p);
  printf("*p的值 %d", *p);
  return 0;
}

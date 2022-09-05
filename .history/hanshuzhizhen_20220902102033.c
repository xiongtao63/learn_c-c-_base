/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 10:15:35
 * @LastEditTime : 2022-09-02 10:20:32
 * @LastEditors  : xiongtao
 * @Logs         : 函数指针
 * 
 */
//函数指针  函数指针是指向函数的指针变量。

#include <stdio.h>

int max(int x,int y){
  return x > y ? x : y;
}

int main(int argc, char const *argv[])
{

  int (*p)(int, int) = max;
  int a, b, c, d;
  printf("请输入三个数字:");
  scanf("%d %d %d", a, b, c);

    /* 与直接调用函数等价，d = max(max(a, b), c) */
  d = p(p(a, b), c);
  printf("最大的数字是: %d\n",d);
  return 0;
}

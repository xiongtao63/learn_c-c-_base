/*
 * @Author       : xiongtao
 * @Date         : 2022-09-14 16:18:00
 * @LastEditTime : 2022-09-14 16:34:05
 * @LastEditors  : xiongtao
 * @Logs         : 文件读写
 *
 */
//
// gcc -E filereadwrite.c -o a.i
// gcc -S a.i -o a.s
// gcc -c a.s -o a.o
// gcc a.o -o a.exe 

#include <stdio.h>
int main(int argc, char const *argv[])
{
  FILE *p = fopen("a.txt", "r");
  if (p == NULL)
  {
    printf("failed");
  }
  else
  {
    printf("success");
  }
  return 0;
}

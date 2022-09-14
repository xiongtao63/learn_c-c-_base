/*
 * @Author       : xiongtao
 * @Date         : 2022-09-14 16:18:00
 * @LastEditTime : 2022-09-14 16:37:34
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

  char s[][10] = {"aaa", "bbb", "ccc"};
  for (int i = 0; i < 9; i++)
  {
    fputc(s[i],p);
  }
  fclose(p);
  return 0;
}

/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 16:08:03
 * @LastEditTime : 2022-09-02 16:19:45
 * @LastEditors  : xiongtao
 * @Logs         : 文件读写
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

  char s = "dsfds";
  int *p = &s;
  FILE *f = NULL;
  f = fopen("./test.txt", "w");
 fprintf(f, "This is testing for fprintf...\n");
 fputc(*p, f);
 fputs("This is testing for fputs...\n", f);
 fclose(f);
 return 0;
}

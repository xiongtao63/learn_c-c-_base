/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 16:08:03
 * @LastEditTime : 2022-09-02 16:14:14
 * @LastEditors  : xiongtao
 * @Logs         : 文件读写
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

  FILE *f = NULL;
  f = fopen("/test.txt", "r");
  fprintf(f, "dddddddddddd\n");
  fputc(1, f);
  fclose(f);
  return 0;
}

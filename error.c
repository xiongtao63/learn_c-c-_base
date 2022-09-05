/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 17:13:36
 * @LastEditTime : 2022-09-02 17:24:02
 * @LastEditors  : xiongtao
 * @Logs         : 错误
 *
 */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int errno;

int main1(int argc, char const *argv[])
{
  FILE *fp = NULL;
  int errnum;
  fp = fopen("udsfn.txt", "rb");
  if (fp == NULL)
  {
    errnum = errno;
    fprintf(stderr, "错误号%d\n", errno);
    perror("错误");
    fprintf(stderr, "打开文件错误%s\n", strerror(errnum));
  }
  else
  {
    fclose(fp);
  }
  return 0;
}

int main(int argc, char const *argv[])
{

  int dividend = 20;
  int divisor = 0;
  int quotient;

  if (divisor == 0)
  {
    fprintf(stderr, "除数为 0 退出运行...\n");
    exit(-1);
  }
  quotient = dividend / divisor;
  fprintf(stderr, "quotient 变量的值为: %d\n", quotient);
  return 0;
}

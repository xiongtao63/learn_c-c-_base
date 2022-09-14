/*
 * @Author       : xiongtao
 * @Date         : 2022-09-14 16:18:00
 * @LastEditTime : 2022-09-14 16:23:11
 * @LastEditors  : xiongtao
 * @Logs         : 文件读写
 *
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
  FILE *p = fopen("/a.txt", "r");
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

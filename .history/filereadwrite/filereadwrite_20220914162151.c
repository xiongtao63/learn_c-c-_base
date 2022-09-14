/*
 * @Author       : xiongtao
 * @Date         : 2022-09-14 16:18:00
 * @LastEditTime : 2022-09-14 16:21:50
 * @LastEditors  : xiongtao
 * @Logs         : 文件读写
 *
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
  FILE *p = fopen("/a.txt", 'r');
  if (p == NULL)
  {
    printf("提示:文件未能成功打开");
  }
  else
  {
    printf("提示:文件已经打开");
  }
  return 0;
}

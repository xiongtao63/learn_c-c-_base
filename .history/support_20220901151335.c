/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 15:11:55
 * @LastEditTime : 2022-09-01 15:13:35
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */

#include <stdio.h>

int count;
extern void write_extern();
int main(int argc, char const *argv[])
{
  count = 5;
  write_extern();
  return 0;
}


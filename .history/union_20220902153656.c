/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 15:35:20
 * @LastEditTime : 2022-09-02 15:36:56
 * @LastEditors  : xiongtao
 * @Logs         : 共用体
 * 
 */

#include <stdio.h>

union Data
{
  int i;
  float b;
  char str[20];
};


int main(int argc, char const *argv[])
{

  union Data data;
  printf("Memory size occupied by data : %d\n",sizeof(data));
  return 0;
}

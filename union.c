/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 15:35:20
 * @LastEditTime : 2022-09-02 15:40:35
 * @LastEditors  : xiongtao
 * @Logs         : 共用体
 *
 */
///最后赋给变量的值占用了内存位置,前面的会损坏
#include <stdio.h>
#include <string.h>

union Data
{
  int i;
  float b;
  char str[20];
};

int main(int argc, char const *argv[])
{

  union Data data;

  data.i = 10;
  printf("data.i : %d\n", data.i);
  data.b = 10.4;
  printf("data.f : %f\n", data.b);
  strcpy(data.str, "dsfdsfsdfds");
  printf("data.str : %s\n", data.str);
  printf("Memory size occupied by data : %d\n", sizeof(data));
  return 0;
}

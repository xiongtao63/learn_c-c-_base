/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 15:35:20
 * @LastEditTime : 2022-09-02 15:39:19
 * @LastEditors  : xiongtao
 * @Logs         : 共用体
 *
 */

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
  data.b = 10.4;
  strcpy(data.str, "dsfdsfsdfds");
  printf("data.i : %d\n", data.i);
  printf("data.f : %f\n", data.b);
  printf("data.str : %s\n", data.str);
  printf("Memory size occupied by data : %d\n", sizeof(data));
  return 0;
}

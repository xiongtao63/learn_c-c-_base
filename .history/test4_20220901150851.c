/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 15:05:10
 * @LastEditTime : 2022-09-01 15:08:26
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */
#include <stdio.h>

void func1(void);
static int count = 10;
int main(int argc, char const *argv[])
{
 while (count--)
 {
   func1();
 }
 
  return 0;
}

void func1(void){
  static int thingy = 5;
  thingy++;
  printf("thingy的值为 %d,,,,count的值为 %d\n", thingy, count);
}


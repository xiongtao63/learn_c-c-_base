/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 15:20:55
 * @LastEditTime : 2022-09-01 15:25:18
 * @LastEditors  : xiongtao
 * @Logs         : 算术运算符
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  // int a = 21;
  // int b = 10;
  // int c;
  // c = a + b;
  // printf("Line1 - c的值为%d\n", c);
  // c = a - b;
  // printf("Line1 - c的值为%d\n", c);
  // c = a * b;
  // printf("Line1 - c的值为%d\n", c);
  // c = a / b;
  // printf("Line1 - c的值为%d\n", c);
  // c = a % b;
  // printf("Line1 - c的值为%d\n", c);
  // c = a++;
  // printf("Line1 - c的值为%d\n", c);
  // c = a--;
  // printf("Line1 - c的值为%d\n", c);

   int c;
   int a = 10;
   c = a++; 
   printf("先赋值后运算：\n");
   printf("Line 1 - c 的值是 %d\n", c );
   printf("Line 2 - a 的值是 %d\n", a );
   a = 10;
   c = a--; 
   printf("Line 3 - c 的值是 %d\n", c );
   printf("Line 4 - a 的值是 %d\n", a );
 
   printf("先运算后赋值：\n");
   a = 10;
   c = ++a; 
   printf("Line 5 - c 的值是 %d\n", c );
   printf("Line 6 - a 的值是 %d\n", a );
   a = 10;
   c = --a; 
   printf("Line 7 - c 的值是 %d\n", c );
   printf("Line 8 - a 的值是 %d\n", a );
  return 0;
}


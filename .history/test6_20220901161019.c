/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 15:20:55
 * @LastEditTime : 2022-09-01 16:09:59
 * @LastEditors  : xiongtao
 * @Logs         : 算术运算符
 *
 */

#include <stdio.h>

int main1(int argc, char const *argv[])
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

  //  int c;
  //  int a = 10;
  //  c = a++;
  //  printf("先赋值后运算：\n");
  //  printf("Line 1 - c 的值是 %d\n", c );
  //  printf("Line 2 - a 的值是 %d\n", a );
  //  a = 10;
  //  c = a--;
  //  printf("Line 3 - c 的值是 %d\n", c );
  //  printf("Line 4 - a 的值是 %d\n", a );

  //  printf("先运算后赋值：\n");
  //  a = 10;
  //  c = ++a;
  //  printf("Line 5 - c 的值是 %d\n", c );
  //  printf("Line 6 - a 的值是 %d\n", a );
  //  a = 10;
  //  c = --a;
  //  printf("Line 7 - c 的值是 %d\n", c );
  //  printf("Line 8 - a 的值是 %d\n", a );

  int a = 21;
  int b = 10;
  int c;

  if (a == b)
  {
    printf("Line 1 - a 等于 b\n");
  }
  else
  {
    printf("Line 1 - a 不等于 b\n");
  }
  if (a < b)
  {
    printf("Line 2 - a 小于 b\n");
  }
  else
  {
    printf("Line 2 - a 不小于 b\n");
  }
  if (a > b)
  {
    printf("Line 3 - a 大于 b\n");
  }
  else
  {
    printf("Line 3 - a 不大于 b\n");
  }
  /* 改变 a 和 b 的值 */
  a = 5;
  b = 20;
  if (a <= b)
  {
    printf("Line 4 - a 小于或等于 b\n");
  }
  if (b >= a)
  {
    printf("Line 5 - b 大于或等于 a\n");
  }

  a = 5;
  b = 20;

  printf("\n");
  if (a && b)
  {
    printf("Line 1 - 条件为真\n");
  }
  if (a || b)
  {
    printf("Line 2 - 条件为真\n");
  }
  /* 改变 a 和 b 的值 */
  a = 0;
  b = 10;
  if (a && b)
  {
    printf("Line 3 - 条件为真\n");
  }
  else
  {
    printf("Line 3 - 条件为假\n");
  }
  if (!(a && b))
  {
    printf("Line 4 - 条件为真\n");
  }

  return 0;
}

int main2(int argc, char const *argv[])
{
  unsigned int a = 60; /* 60 = 0011 1100 */
  unsigned int b = 13; /* 13 = 0000 1101 */
  int c = 0;

  c = a & b; /* 12 = 0000 1100 */
  printf("Line 1 - c 的值是 %d\n", c);

  c = a | b; /* 61 = 0011 1101 */
  printf("Line 2 - c 的值是 %d\n", c);

  c = a ^ b; /* 49 = 0011 0001 */
  printf("Line 3 - c 的值是 %d\n", c);

  c = ~a; /*-61 = 1100 0011 */
  printf("Line 4 - c 的值是 %d\n", c);

  c = a << 2; /* 240 = 1111 0000 */
  printf("Line 5 - c 的值是 %d\n", c);

  c = a >> 2; /* 15 = 0000 1111 */
  printf("Line 6 - c 的值是 %d\n", c);
  return 0;
}

//赋值运算

int main3(int argc, char const *argv[])
{
  int a = 21;
   int c ;
 
   c =  a;
   printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );
 
   c +=  a;
   printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );
 
   c -=  a;
   printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );
 
   c *=  a;
   printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );
 
   c /=  a;
   printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );
 
   c  = 200;
   c %=  a;
   printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c );
 
   c <<=  2;
   printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );
 
   c >>=  2;
   printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );
 
   c &=  2;
   printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );
 
   c ^=  2;
   printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );
 
   c |=  2;
   printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
  return 0;
}


// 杂项运算符 ↦ sizeof & 三元

int main(int argc, char const *argv[])
{
  int a = 4;
  short b;
  double c;
  int *ptr;
     /* sizeof 运算符实例 */
   printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a) );
   printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b) );
   printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c) );

   ptr = &a;
   printf("a  的值是%d\n", a);
   printf("*ptr   = %d\n", *ptr);
   printf("ptr   = %d\n", ptr);
   return 0;
}


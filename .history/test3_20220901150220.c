/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 14:33:22
 * @LastEditTime : 2022-09-01 15:02:20
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */

#include <stdio.h>

int x = 1;
int y = 2;
int addtwonum();

int main1(int argc, char const *argv[])
{
  int result;
  result = addtwonum();
  printf("result:   %d", result);
  return 0;
}

int main2(int argc, char const *argv[])
{
  printf("hello\tworld\n\n");
  return 0;
}

//定义常量
// #define LENGTH 10
// #define WIDTH 5
// #define NEWLINE '\n'

// int main3(int argc, char const *argv[])
// {

//   int area;
//   area = LENGTH * WIDTH;
//   printf("area  = %d\n", area);
//   printf("%c", NEWLINE);
//   return 0;
// }

//const 定义常量
int main(int argc, char const *argv[])
{
  const int LENGTH = 10;
  const int WIDTH = 5;
  const char NEWLINE = '\n';
  int area;
  area = LENGTH * WIDTH;
  printf("area  = %d\n", area);
  printf("%c", NEWLINE);
  return 0;
}



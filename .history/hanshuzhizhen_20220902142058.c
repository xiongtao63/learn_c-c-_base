/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 10:15:35
 * @LastEditTime : 2022-09-02 14:20:58
 * @LastEditors  : xiongtao
 * @Logs         : 函数指针
 *
 */
//函数指针  函数指针是指向函数的指针变量。

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
  return x > y ? x : y;
}

int main1(int argc, char const *argv[])
{

  int (*p)(int, int) = max;
  int a, b, c, d;
  printf("请输入三个数字:");
  scanf("%d %d %d", &a, &b, &c);

  /* 与直接调用函数等价，d = max(max(a, b), c) */
  d = p(p(a, b), c);
  printf("最大的数字是: %d\n", d);
  return 0;
}

///回调函数
// 函数指针作为某个函数的参数

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
  for (size_t i = 0; i < arraySize; i++)
  {
    array[i] = getNextValue();
  }
}

int getNextValue(void)
{
  return rand();
}

int main(int argc, char const *argv[])
{

  int myArray[10];
  /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
  populate_array(myArray, 10, getNextValue);
  for (int i = 0; i < 10; i++)
  {
    printf("%d", myArray[i]);
  }

  printf("\n");
  return 0;
}

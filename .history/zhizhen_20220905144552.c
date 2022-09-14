/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 09:27:52
 * @LastEditTime : 2022-09-05 14:45:41
 * @LastEditors  : xiongtao
 * @Logs         : 指针
 * 
 */
#include <stdio.h>

int main1(int argc, char const *argv[])
{
  int i = 10;
  int *p;
  p = &i;

  printf("i的地址是%p",p);
  return 0;
}

int main2(int argc, char const *argv[])
{
  int a = 20;
  int *p;
  p = &a;

  printf("a变量的地址是 %p\n", &a);
  printf("p变量存储的地 %p\n", p);
  printf("*p的值 %d\n", *p);

  int *ptr = NULL;
  printf("ptr 的地址是%p", ptr);
  return 0;
}

int main3(int argc, char const *argv[])
{
  ///对指针 进行算数运算 //数组是一块连续内存 分别保存 11-55 //*p1 指向第一个数据 11，移动指针就指向第二个了
  int arr[] = {11, 22, 33, 44, 55};
  int *p1 = arr;
  for (size_t i = 0; i < 5; i++)
  {
    //自增++ 运算符比 解引用* 高,但++在后为先用后加 //如果++在前则输出 22-55+xx 
    printf("%d\n", *p1++); //p1[0] == *(p1+1) == s[1]
  }
  
  return 0;
}

int main(int argc, char const *argv[])
{
  // 在c语言中，指针和数组名都表示地址
  //数组是一块内存连续的数据。
  //指针是指向内存空间的变量。
  int a[] = {11, 22, 33, 44, 55};
  //直接输出数组名会得到数组首元素的地址
  printf("%#x\n", a);
  printf("%d\n", a[0]);
  return 0;
}


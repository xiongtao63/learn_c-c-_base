/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 14:49:54
 * @LastEditTime : 2022-09-05 15:56:13
 * @LastEditors  : xiongtao
 * @Logs         :
 *
 */

#include <stdio.h>

int main1(int argc, char const *argv[])
{
  // 在c语言中，指针和数组名都表示地址
  //数组是一块内存连续的数据。
  //指针是指向内存空间的变量。
  int a[] = {11, 22, 33, 44, 55};
  //直接输出数组名会得到数组首元素的地址
  printf("%#x\n", a);
  printf("%#x\n", &a[0]);
  printf("%d\n", *a);
  printf("====\n");
  int *p = a;
  //数组指针

  int array[2][3] = {{11, 22, 33}, {44, 55, 66}};
  int arr1[2][3] = {11, 22, 33, 44};
  ////array1 就是一个 int[3] 类型的指针
  int(*array1)[3] = array;
  //怎么取 55 ？ //通过下标
  array[1][1] = array1[1][1];
  int i = *(*(array1 + 1) + 1);
  printf("===%d\n", i);
  // 1、 指针偏移 因为array1的类型是3个int的数组 所以 +1 移动了12位
  //  array1 + 1
  //  //2、获得{44,55,66}数组
  //  (*(array1 + 1))[1] = 55
  //  (*(array1 + 1)
  //  //3、对数组执行 +/- 相当于隐式的转为指针 //获得 55 的地址 再解地址
  //  *(array1 + 1) + 1

  //指针数组
  int *array2[2];
  array2[0] = &i;

  return 0;
}

int main2(int argc, char const *argv[])
{
  // const char *
  char str[] = "hello";
  //从右往左读 //P是一个指针 指向 const char类型
  const char *p = str;
  str[0] = 'd';
  // p[0] = 'a';  //错误 不能通过指针修改 const char

  //可以修改指针指向的数据
  //意思就是 p 原来 指向david,
  //不能修改david里面的属性，
  //但是可以让p指向lance，lance的。
  p = "dsfsd";
  char const *p1 = str;
  // p1[0] = 'a';

  // p2是一个const指针 指向char类型数据
  char *const p2 = str;
  p2[0] = 'a';
  // p2 = "dsfds";错误

  // p3是一个const的指针变量 意味着不能修改它的指向
  //同时指向一个 const char 类型 意味着不能修改它指向的字符
  //集合了 const char * 与 char * const
  const char *const p3 = str;

  //多级指针
  //指向指针的指针。
  int i = 10;
  int *j = &i;
  int **k = &j;
  printf("%d\n", **k);

  return 0;
}
void change1(int i)
{
  i = 10;
}
void change2(int *i)
{
  *i = 10;
}

#include <stdarg.h>
int add(int num, ...)
{
  va_list valist;
  int sum = 0;
  // 初始化 valist指向第一个可变参数 (...)
  va_start(valist, num);
  for (size_t i = 0; i < num; i++)
  {
    //访问所有赋给 valist 的参数
    int j = va_arg(valist, int);
    printf("%d\n", j);
    sum += j;
  } //清理为 valist 内存
  va_end(valist);
  return sum;
}

int main(int argc, char const *argv[])
{
  int i = 1;
  change1(i);
  printf("%d\n", i); // i == 1
  change2(&i);
  printf("%d\n", i); // i == 1
  int k = add(3, 22, 11, 34);
  printf("%d\n", k);
  return 0;
}

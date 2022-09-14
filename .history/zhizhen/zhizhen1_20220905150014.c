/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 14:49:54
 * @LastEditTime : 2022-09-05 15:00:14
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
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
  return 0;
}

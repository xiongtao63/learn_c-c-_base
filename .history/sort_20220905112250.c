/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 11:06:31
 * @LastEditTime : 2022-09-05 11:22:49
 * @LastEditors  : xiongtao
 * @Logs         : 排序算法
 * 
 */

#include <stdio.h>
//冒泡排序
void bubble_sort(int arr[], int len){
  int i, j, temp;
  for ( i = 0; i < len -1; i++)
  {
    for ( j = 0; j < len - 1 - i; j++)
    {
     if(arr[j] > arr[j+1]){
       temp = arr[j];
       arr[j] = arr[j + 1];
       arr[j + 1] = temp;
     }
    }
    
  }
  
} 


int main(int argc, char const *argv[])
{
  int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
  printf("sizeof(arr)===%d\n", sizeof(arr));
  printf("sizeof(*arr)===%d\n", sizeof(*arr));
  int len = (int)sizeof(arr) / sizeof(*arr);
  bubble_sort(arr, len);

  // int i;
  // for ( i = 0; i < len; i++)
  // {
  //   printf("%d\n", arr[i]);
  // }
  
  return 0;
}


/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 11:06:31
 * @LastEditTime : 2022-09-05 13:28:03
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
    for ( j = 0; j < len - 1 - i; j++)  //-i的含义最后i个已经是最大的，可以不用排，  访问未排序的元素
    {
     if(arr[j] > arr[j+1]){
       temp = arr[j];
       arr[j] = arr[j + 1];
       arr[j + 1] = temp;
     }
    }
    
  }
  
} 

void swap(int * a,int * b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

//选择排序
void selection_sort(int arr[], int len){
  int i, j, temp;
  for ( i = 0; i < len-1; i++)
  {
    int min = i;  // 记录最小值，第一个元素默认最小
    for ( j = i+1; j < len; j++)  // 访问未排序的元素
    {
      if(arr[j] < arr[min]){  // 找到目前最小值
        min = j; //记录最小值
      }
    }

    if(min != i){
      // temp = arr[min];
      // arr[min] = arr[i];
      // arr[i] = temp;
      swap(&arr[min], &arr[i]);
    }
  } 
}

//插入排序
void insertion_sort(int arr[],int len){
  int i, j, temp;
  for (i = 1; i < len; i++)
  {
    temp = arr[i];
    for ( j = i; j > 0 && arr[j-1] > temp; j--)
    {
      arr[j] = arr[j - 1];
    }
    arr[j] = temp;
      int k;
  for ( k = 0; k < len; k++)
  {
    printf("%d\n", arr[k]);
  }
  printf("==============");
    }
  
}



int main(int argc, char const *argv[])
{
  int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
  printf("sizeof(arr)===%d\n", sizeof(arr));
  printf("sizeof(*arr)===%d\n", sizeof(*arr));
  int len = (int)sizeof(arr) / sizeof(*arr);
  // bubble_sort(arr, len);
  // selection_sort(arr, len);
  insertion_sort(arr, len);

  int k;
  for ( k = 0; k < len; k++)
  {
    printf("%d\n", arr[k]);
  }
  
  return 0;
}


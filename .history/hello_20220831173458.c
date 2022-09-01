/*
 * @Author       : xiongtao
 * @Date         : 2022-08-31 16:06:39
 * @LastEditTime : 2022-08-31 17:34:58
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */
#include <stdio.h>
 
int main1()
{
   /* 我的第一个 C 程序 */
   printf("Hello, World!s \n");
   return 0;
}
int main(int argc, char const *argv[])
{

  if(argc < 2){
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return 1;
  }

  return 0;
}





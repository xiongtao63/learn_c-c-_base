/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 15:13:45
 * @LastEditTime : 2022-09-01 15:14:58
 * @LastEditors  : xiongtao
 * @Logs         : 
 * 
 */

#include <stdio.h>

extern int count;
void wirte_extern(void){
  printf("count is %d\n", count);
}

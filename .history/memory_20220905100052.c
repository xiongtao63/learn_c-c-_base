/*
 * @Author       : xiongtao
 * @Date         : 2022-09-05 09:55:16
 * @LastEditTime : 2022-09-05 09:59:59
 * @LastEditors  : xiongtao
 * @Logs         : 内存管理
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

  char name[100];
  char *desc;
  strcpy(name, "dsfdsf");

  desc = (char *)malloc(200 * sizeof(char));  //calloc(200, sizeof(char));
  if (desc == NULL)
  {
    fprintf(stderr, "Error - unable to allocate required memory\n");
  }
  else
  {
    strcpy(desc, "ddddddddddddddddddddd");
  }
  printf("Name = %s\n", name);
  printf("Description: %s\n", desc);
  return 0;
}
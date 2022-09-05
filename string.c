/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 14:32:25
 * @LastEditTime : 2022-09-02 14:46:07
 * @LastEditors  : xiongtao
 * @Logs         : 字符串
 * 
 */
#include <stdio.h>
#include <string.h>

int main1(int argc, char const *argv[])
{
  char site[7] = {'r', 'U', 'N', 'O', 'O', 'B', '\0'};
  printf("     %s \n",site);
  return 0;
}

int main(int argc, char const *argv[])
{
  char str1[14] = "ruuboo";
  char str2[14] = "google";
  char str3[14];
  int len;
  strcpy(str3, str1);
  printf("strcpy( str3, str1) :  %s\n",str3);

  strcat(str1, str2);
  printf("strcat(str1, str2) :  %s\n",str1);

  len = strlen(str1);
  printf("长度  %d", len);
  return 0;
}

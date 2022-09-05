/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 16:08:03
 * @LastEditTime : 2022-09-02 16:57:16
 * @LastEditors  : xiongtao
 * @Logs         : 文件读写
 *
 */

#include <stdio.h>

int main1(int argc, char const *argv[])
{

  FILE *f = NULL;
  f = fopen("./test.txt", "w");
  fprintf(f, "This is testing for fprintf...\n");
  fputc(10, f);
  fputs("This is testing for fputs...\n", f);
  fclose(f);
  return 0;
}

int main2(int argc, char const *argv[])

{
  FILE *fp = NULL;
  char buff[255];
  fp = fopen("./test.txt", "r");
  // fscanf(fp, "%s", buff);
  // printf("1: %s\n", buff);

  // fgets(buff, 255, (FILE *)fp);
  // printf("2: %s\n", buff);
  fgets(buff, 255, (FILE *)fp);
  printf("3: %s\n", buff);
  fclose(fp);
  return 0;
}

int main3(int argc, char const *argv[])
{


  printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
  return 0;
}

#define MAX(x,y)((x) > (y)?(x):(y))
int main(int argc, char const *argv[])
{
    printf("Max between 20 and 10 is %d\n", MAX(10, 20));  
  return 0;
}

/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 16:08:03
 * @LastEditTime : 2022-09-02 16:28:37
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

int main(int argc, char const *argv[])

{
  FILE *fp = NULL;
  char buff[255];
  fp = fopen("./test.txt", "r");
  fscanf(fp, "%s", buff);
  printf("1: %s\n", buff );

  fgets(buff, 255, (FILE *)fp);
    printf("2: %s\n", buff );

    fclose(fp);
    return 0;
}

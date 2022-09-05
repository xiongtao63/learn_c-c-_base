/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 17:13:36
 * @LastEditTime : 2022-09-02 17:18:36
 * @LastEditors  : xiongtao
 * @Logs         : 错误
 * 
 */

#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno ;

int main(int argc, char const *argv[])
{
  FILE *fp = NULL;
  int errnum;
  fp = fopen("udsfn.txt", "r");
  if(fp ==NULL){
    errnum = errno;
    fprintf(stderr, "错误号%d\n", errno);
    perror("错误");
    fprintf(stderr, "打开文件错误%s\n", strerror(errnum));
  }else{
    fclose(fp);
  }
  return 0;
}

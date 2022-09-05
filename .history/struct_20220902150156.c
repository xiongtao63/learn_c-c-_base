/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 14:52:23
 * @LastEditTime : 2022-09-02 15:01:56
 * @LastEditors  : xiongtao
 * @Logs         : 结构体
 * 
 */
#include <stdio.h>

struct SIMPLE
{
  int a;
  char b;
  double c;
};

struct SIMPLE t1, t2[10], *t3;

typedef struct 
{
  int a;
} Simple2;


Simple2 U1, U2, U3;


struct Books
{
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
} book = {"c语言", "zhangs","lisi" , 11};


int main(int argc, char const *argv[])
{
  printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n",book.title,book.author,book.subject,book.book_id);
  return 0;
}

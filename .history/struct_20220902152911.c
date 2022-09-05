/*
 * @Author       : xiongtao
 * @Date         : 2022-09-02 14:52:23
 * @LastEditTime : 2022-09-02 15:29:05
 * @LastEditors  : xiongtao
 * @Logs         : 结构体
 *
 */
#include <stdio.h>
#include <string.h>

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
} book = {"c语言", "zhangs", "lisi", 11};

void printBooks(struct Books book);

int main(int argc, char const *argv[])
{
  printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);

  struct Books Book1;
  struct Books Book2;

  /* Book1 详述 */
  strcpy(Book1.title, "C Programming");
  strcpy(Book1.author, "Nuha Ali");
  strcpy(Book1.subject, "C Programming Tutorial");
  Book1.book_id = 6495407;

  /* Book2 详述 */
  strcpy(Book2.title, "Telecom Billing");
  strcpy(Book2.author, "Zara Ali");
  strcpy(Book2.subject, "Telecom Billing Tutorial");
  Book2.book_id = 6495700;

  printBooks(Book1);
  printBooks(Book2);

  //   /* 输出 Book1 信息 */
  //  printf( "Book 1 title : %s\n", Book1.title);
  //  printf( "Book 1 author : %s\n", Book1.author);
  //  printf( "Book 1 subject : %s\n", Book1.subject);
  //  printf( "Book 1 book_id : %d\n", Book1.book_id);

  //  /* 输出 Book2 信息 */
  //  printf( "Book 2 title : %s\n", Book2.title);
  //  printf( "Book 2 author : %s\n", Book2.author);
  //  printf( "Book 2 subject : %s\n", Book2.subject);
  //  printf( "Book 2 book_id : %d\n", Book2.book_id);
  return 0;
}

void printBooks(struct Books Book2)
{
  printf("Book 2 title : %s\n", Book2.title);
  printf("Book 2 author : %s\n", Book2.author);
  printf("Book 2 subject : %s\n", Book2.subject);
  printf("Book 2 book_id : %d\n", Book2.book_id);
}

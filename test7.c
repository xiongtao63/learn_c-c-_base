/*
 * @Author       : xiongtao
 * @Date         : 2022-09-01 16:18:29
 * @LastEditTime : 2022-09-01 16:29:02
 * @LastEditors  : xiongtao
 * @Logs         : 三元运算符
 *
 */
#include <stdio.h>

int main1(int argc, char const *argv[])
{

  int A = 20;
  int B = 10;
  char buy;
  int sum, number;

  printf("以下是本店的商品及价格：\n A 商品每个十元；\n B 商品每个二十元；\n\n");
  printf("请输入你所需的产品(A 或 B):");
  scanf("%c", &buy);
  printf("请输入所需的数量：");
  scanf("%d", &number);
  sum = buy == 'A' ? A * number : B * number;
  printf("\n你所需的%d个%c商品的价格总共%d", number, buy, sum);

  /* code */
  return 0;
}

int main(int argc, char const *argv[])
{
  for ( ; ;)
  {
       printf("该循环会永远执行下去！\n");
  }
  
  return 0;
}


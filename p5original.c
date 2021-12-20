#include<stdio.h>
void input(int *a, int *b, int *c)
{
  printf("Enter the first number: ");
  scanf("%d", a);
  printf("enter the second number: ");
  scanf("%d", b);
  printf("Enter the third number:");
  scanf("%d", c);
}
void cmp(int a, int b, int *large)
{
  if(a>b)


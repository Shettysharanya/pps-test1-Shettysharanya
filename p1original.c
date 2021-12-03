#include<stdio.h>
int add()
{
  float a,b;
  printf("Enter 2 numbers\n");
  scanf("%f%f",&a,&b);
  float sum=a+b;
  printf("%f",sum);
  return 0;
}
int main()
{
  add();
  return 0;
}
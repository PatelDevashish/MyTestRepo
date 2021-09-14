#include<stdio.h>
int main()
{
  int add, sub, mul;
  float div;

  //addition
  add = 5 + 2;
  
  //subtraction
  sub = 5 - 2;
  printf("=====================================================");
  //multiplication
  mul = 5 * 2;
  printf("=====================================================");
  //division
  div = 5 / (float)2;

  printf("=====================================================");

  printf("Add: %d, Sub: %d, Mul: %d, Div: %.2f", add,sub,mul,div);

  printf("=====================================================");
  return 0;
}
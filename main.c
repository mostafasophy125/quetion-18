/*
   Write a C program to swap the values of two variables using arithmetic operations only
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1,num2 ;
  puts("Enter 2 num :");
  scanf("%d%d",&num1,&num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf(" num1=%d \n num2=%d \n",num1,num2);


    return 0;
}

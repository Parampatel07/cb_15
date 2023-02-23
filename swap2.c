// Write a programe to peform swap without using 3rd variable
#include <stdio.h>
void main()
{
     int num1 = 10;
     int num2 = 50;

     printf("The value of num1 is %d and value of num2 is %d ", num1, num2);
     num1=num1+num2;
     num2=num1-num2;
     num1=num1-num2;
     printf("\nThe value of num1 is %d and value of num2 is %d ", num1, num2);
}
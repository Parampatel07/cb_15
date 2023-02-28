// Write a programe to findout which number is greater out of given 2 numbers 
#include<stdio.h>
void main()
{
     float number1,number2;

     printf("Enter value of number 1 ");
     scanf("%f",&number1);

     printf("Enter value of number 2 ");
     scanf("%f",&number2);
     // < , > , <= ,>= , == , !=
     if(number1 < number2)
     {
          printf("number 2 is greater ");
     }
     else
     {
          printf("number 1 is greater ");
     }
     printf("\nGoodbyee..");
}
// Write a programe to findout factorial of given number
#include <stdio.h>
void main()
{
     int number = 5, answer, count = 3;
     // 120
     printf("Enter value of number ");
     scanf("%d", &number);
     if (number == 1)
     {
          printf("the value of answer is 1");
     }
     else if (number == 2)
     {
          printf("the value of answer is 2");
     }
     else
     {
          answer = number * (number - 1);
          count = number - 2;
          do
          {
               answer = answer * count;
               count--;
          } while (count > 0);
          printf("the value of answer is %d ", answer);
     }
     printf("\nGoodbyee..");
     // answer = answer * 2;
     // answer = answer * 1;
}
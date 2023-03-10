// Write a programe to create a math calculator with following option using switch case
// addition
// subtraction
// multiplication
// division
// modlus
// max
// min
// equality
#include <stdio.h>
void main()
{
     int number1, number2, option, answer;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     printf("\nSelect any one option ");
     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for multiplication ");
     printf("\nEnter 4 for division");
     printf("\nEnter 5 for modlus ");
     printf("\nEnter 6 for max ");
     printf("\nEnter 7 for min ");
     printf("\nEnter 8 for equality ");
     scanf("%d", &option);

     switch (option)
     {
     case 1:
          answer = number1 + number2;
          printf("\nyour answer is %d ", answer);
          break;

     case 2:
          answer = number1 - number2;
          printf("\nyour answer is %d ", answer);
          break;

     case 3:
          answer = number1 * number2;
          printf("\nyour answer is %d ", answer);
          break;

     case 4:
          answer = number1 / number2;
          printf("\nyour answer is %d ", answer);
          break;

     case 5:
          answer = number1 % number2;
          printf("\nyour answer is %d ", answer);
          break;

     case 6:
          if (number1 > number2)
          {
               printf("\nnumber 1 is greater ");
          }
          else if (number2 > number1)
          {
               printf("\nnumber 2 is greater ");
          }
          else
          {
               printf("\nall are same ");
          }
          break;

          case 7:
          if(number1<number2)
          {
               printf("\nnumber 1 is smaller ");
          }
          else if(number2<number1)
          {
               printf("\nnumber 2 is smaller ");
          }
          else
          {
               printf("\nall are same ");
          }
          break;

          case 8:
          if(number1 == number2)
          {
               printf("\nboth are same ");
          }
          else
          {
               printf("\nboth are not same ");
          }
          break;

          default:
          printf("\ninvalid input ");
          break;
     }
     printf("\nGoodbyee..");
}
// Write a programe to print following pattern
// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000
#include <stdio.h>
void main()
{
     int number = 1, number2 = 2, answer = 0;

     for(answer=1 ; answer < 9730 ; number2 = number2 +1 )
     {
          answer = number2 * (number2 * 2 - 1);
          printf("%d ", answer);
          // number2 = number2 + 1;
     }
}
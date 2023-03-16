// 1 8 27 64 .... 10000
#include <stdio.h>
void main()
{
     int number = 1, answer = 0;

     answer = number * number * number;
     printf("%d ", number);
     // number = number + 1;
     // answer = number * number * number;
     // printf("%d ",answer);
     // number = number + 1;
     // answer= number * number * number;
     // printf("%d ",answer);
     while (answer<9261)
     {
          number = number + 1;
          answer = number * number * number;
          printf("%d ", answer);
     }
}
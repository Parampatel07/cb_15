// write a program to print following series
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include <stdio.h>
void main()
{
     int number = 0, answer = 1, count = 2;

     printf("%d ", number);
     printf("%d ", answer);
     while(answer < 990)
     {
          answer = answer + count;
          printf("%d ", answer);
          count = count + 1;
     }
     // answer = answer + count;
     // printf("%d ",answer);
     // count = count +1;
     // answer = answer+ count;
     // printf("%d ",answer);
     // count = count +1;
     // answer = answer + count ;
     // printf("%d ",answer);
}
// Write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include <stdio.h>
void main()
{
     int first = 2, second = 1, answer = 0;
     printf("%d \n", first);
     printf("%d \n", second);
     answer = first + second;
     while(answer<2207)
     {
          first = answer;
          printf("%d \n", answer);
          answer = answer + second;
          second = answer;
          printf("%d \n", answer);
          answer = answer + first;
     }
     // first =answer ;
     // printf("%d \n",answer);
     // answer = answer + second;
     // printf("%d \n",answer);
     // answer = answer + first;
     // printf("%d \n",answer);
}
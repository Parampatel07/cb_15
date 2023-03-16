// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
// Write a programe to print half pyramid
#include <stdio.h>
void main()
{
     int count = 0,flash=2;
     printf("*");
     printf("\n");

     while(flash<10)
     {
          while (count < flash)
          {
               printf("*");
               count = count + 1;
          }
          printf("\n");
          count = 0;
          flash = flash +1;
     }
     // while (count < 3)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count=0;
     // while(count<5)
     // {
     //      printf("*");
     //      count++;
     // }
}
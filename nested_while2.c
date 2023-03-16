// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
// Write a programe to print inverted half pyramid
#include <stdio.h>
void main()
{

     int size=0;
     printf("Enter size of triangle ");
     scanf("%d",&size);
     int count = 0, carbon = size;

     while(carbon > 0)
     {
          while (count < carbon)
          {
               printf("*");
               count++;
          }
          printf("\n");
          count = 0;
          carbon--;
     }
     // while (count < 4)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 3)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count=0;
     // while (count < 2)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // printf("*");
}
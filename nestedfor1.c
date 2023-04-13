// Write a programe to print hollow half inverted pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0, space = 0;

     for (count = 0; count < 7; count++)
     {
          printf("*");
     }
     printf("\n");
     printf("*");
    
     for(count=4;count>0;count--)
     {
          for (space = 0; space < count; space++)
          {
               printf(" ");
          }
          printf("*");
          printf("\n");
          printf("*");

     }demo
     // for (space = 0; space < 3; space++)
     // {
     //      printf("_");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // for(space =0;space<2;space++)
     // {
     //      printf("_");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // printf("_");
     // printf("*");
     // printf("\n");
     // printf("*");
}
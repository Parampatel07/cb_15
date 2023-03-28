// Write a programe to print full pyramid
// https://i1.faceprep.in/fp/articles/img/466841580817324.png
#include <stdio.h>
void main()
{
     int space = 0, count = 0,flash=0,adder=1;

     // for (space = 0; space < 10; space++)
     // {
     //      printf("  ");
     // }
     // printf("*");
     // printf("\n");
     for(flash=9;flash>0;flash--)
     {
          for (space = 0; space < flash; space++)
          {
               printf(" ");
          }
          for (count = 0; count < adder; count++)
          {
               printf("* ");
          }
          printf("\n");
          adder = adder+1;
     }
     // for (space = 0; space < 8; space++)
     // {
     //      printf("  ");
     // }
     // for(count=0;count<3;count++)
     // {
     //      printf("*  ");
     // }
     // printf("\n");
     // for(space=0;space<7;space++)
     // {
     //      printf("  ");
     // }
     // for(count=0;count<4;count++)
     // {
     //      printf("*  ");
     // }
     // printf("*  ");
}
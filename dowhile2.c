// Write a programe to print hollow half pyramid
// https://i1.faceprep.in/fp/articles/img/580817324.png
#include <stdio.h>
void main()
{
     int count = 0, flash = 0, number = 1;
     printf("1");
     printf("\n");
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf("\n");
     // printf("*");
     // do
     // {
     //      printf(" ");
     //      count++;
     // } while (count < 2);
     // printf("*");
     // printf("\n");
     // printf("*");
     // count = 0;
     do
     {
          printf("%d", number);
          do
          {
               printf(" ");
               count++;
               number++;
          } while (count <= flash);
          printf("%d", number);
          printf("\n");
          number = 1;
          count = 0;
          flash++;
     } while (flash < 5);
     count = 0;
     do
     {
          printf("%d", count + 1);
          count++;
     } while (count < 8);

     // do
     // {
     //      printf(" ");
     //      count++;
     // }while(count<4);
     // printf("*");
}
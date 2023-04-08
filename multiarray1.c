// Write a programe to take input  for 5 students marks for 5 subject
// example of multiarray
#include <stdio.h>
void main()
{
     int student[5][5], count, flash;

     for (flash = 0; flash < 5; flash++)
     {
          printf("Enter marks of student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nEnter marks for subject %d ", count + 1);
               scanf("%d", &student[flash][count]);
          }
     }
     for(flash=0;flash<5;flash++)
     {
          printf("\n\nThe marks for student %d ",flash+1);
          for (count = 0; count < 5; count++)
          {
               printf("\nSubject %d = %d ", count + 1, student[flash][count]);
          }
     }
     // printf("\nSubject 2 = %d ",student[0][1]);
     // printf("\nSubject 3 = %d ",student[0][2]);
     // printf("\nSubject 4 = %d ",student[0][3]);
     // printf("\nSubject 5 = %d ",student[0][4]);

     // printf("Enter marks for subject 2 ");
     // scanf("%d",&student[0][1]);
     // printf("Enter marks for subject 3 ");
     // scanf("%d",&student[0][2]);
     // printf("Enter marks for subject 4 ");
     // scanf("%d",&student[0][3]);
}
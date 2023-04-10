// Write a programe to take input  for 5 students marks for 5 subject
// example of multiarray
#include <stdio.h>
void main()
{
     int student[5][5], count, flash, sum[5];
     float average;
     for (flash = 0; flash < 5; flash++)
     {
          printf("Enter marks of student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nEnter marks for subject %d ", count + 1);
               scanf("%d", &student[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          printf("\n\nThe marks for student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nSubject %d = %d ", count + 1, student[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          sum[flash] = 0;
          for (count = 0; count < 5; count++)
          {
               sum[flash] = sum[flash] + student[flash][count];
          }
          printf("\nthe value of sum for student %d is %d ", flash + 1, sum[flash]);
     }
     average = 0;
     for(count=0;count<5;count++)
     {
          average = average + sum[count];
     }
     printf("\nthe total of all sum is %f ",average);
     average = average / 5;
     printf("\naverage of class is %.2f ",average);
}
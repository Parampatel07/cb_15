// Write a programe to i/o in a multiarray
// to store 5 students marks for 5 subject
#include <stdio.h>
void main()
{
     int students[5][5], count = 0, flash = 0, sum[5];
     float avg;
     for (flash = 0; flash < 5; flash++)
     {
          printf("Enter marks for student %d \n", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("Enter marks for subject %d ", count + 1);
               scanf("%d", &students[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          printf("\nThe marks of student %d are \n", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nsubject %d = %d", count + 1, students[flash][count]);
          }
     }
     for(flash=0;flash<5;flash++)
     {
          sum[flash] = 0;
          for (count = 0; count < 5; count++)
          {
               sum[flash] = sum[flash] + students[flash][count];
          }
          printf("\nstudent is %d sum is %d ", flash + 1, sum[flash]);
     }
     avg = (sum[0]+sum[1]+sum[2]+sum[3]+sum[4]) / 5 ;
     printf("Average is %f ",avg);
}
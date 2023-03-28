// Example of array
// Write a programe to store and display 5 subject marks and also find sum and percentage and also find highest marks
#include <stdio.h>
void main()
{
     int subject[5], count = 0, sum = 0, highest = 0, temp;
     float percentage = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter mark of subject %d ", count + 1);
          scanf("%d", &subject[count]);
     }
     for (count = 0; count < 5; count++)
     {
          printf("\nthe marks for subject %d is %d ", count + 1, subject[count]);
     }
     sum = 0;
     for (count = 0; count < 5; count++)
     {
          sum = sum + subject[count];
     }
     printf("\nTotal is %d ", sum);
     percentage = sum * 100 / 500;
     printf("\nPercentage is %.2f ", percentage);

     for(count=1;count<5;count++)
     {
          if (subject[0] < subject[count])
          {
               temp = subject[0];
               subject[0] = subject[count];
               subject[count] = temp;
          }
     }
     printf("\nthe highest mark is %d ",subject[0]);
     // if(subject[0]<subject[2])
     // {
     //      temp = subject[0];
     //      subject[0]=subject[2];
     //      subject[2]=temp;
     // }
     // if(subject[0]<subject[3])
     // {

     // }
}
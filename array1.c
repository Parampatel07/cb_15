// Example of array
// Write a programe to store and display 5 subject marks
#include <stdio.h>
void main()
{
     int subject[5], count = 0;

     for (count = 0; count < 5; count++)
     {
          printf("Enter mark of subject %d ", count + 1);
          scanf("%d", &subject[count]);
     }

     for(count=0;count<5;count++)
     {
          printf("\nthe marks for subject %d is %d ",count+1,subject[count]);
     }

     
     // printf("\nthe marks for subject 2 is %d", subject[1]);
     // printf("\nthe marks for subject 3 is %d", subject[2]);
     // printf("\nthe marks for subject 4 is %d", subject[3]);
     // printf("\nthe marks for subject 5 is %d", subject[4]);

     // printf("Enter marks of subject 2 ");
     // scanf("%d",&subject[1]);
     // printf("Enter marks of subject 3 ");
     // scanf("%d",&subject[2]);
     // printf("Enter marks of subject 4 ");
     // scanf("%d",&subject[3]);
     // printf("Enter marks of subject 5 ");
     // scanf("%d",&subject[4]);
}
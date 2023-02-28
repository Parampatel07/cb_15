// write a program to accept month number from user. display message "this month has 28 or 29 days" if month if february
#include<stdio.h>
void main()
{
     int month;

     printf("Enter 1 for Jan");
     printf("\nEnter 2 for Feb");
     printf("\nEnter 3 for Mar");
     printf("\nEnter 4 for Apr");
     printf("\nEnter 5 for May");
     printf("\nEnter 6 for Jun");
     printf("\nEnter 7 for July");
     printf("\nEnter 8 for Aug");
     printf("\nEnter 9 for Sep");
     printf("\nEnter 10 for Oct");
     printf("\nEnter 11 for Nov");
     printf("\nEnter 12 for Dec");
     printf("\nSelect any one month ");
     scanf("%d",&month);

     if(month == 2)
     {
          printf("this month has 28/29 days ");
     }
     else
     {
          printf("this month has 30/31 days ");
     }
     printf("\nGoodbyee..");
}
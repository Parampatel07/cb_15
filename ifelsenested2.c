// Write a programe to findout how many days month has
#include <stdio.h>
void main()
{
     int month;
     printf("Enter your month ");
     scanf("%d", &month);
     if (month < 12 && month > 0)
     {
          if (month == 2)
          {
               printf("these month has 28/29 days ");
          }
          else
          {
               if (month <= 7)
               {
                    if (month % 2 == 0)
                    {
                         printf("these month has 30 days");
                    }
                    else
                    {
                         printf("these month has 31 days ");
                    }
               }
               else
               {
                    if (month % 2 == 0)
                    {
                         printf("these month has 31 days ");
                    }
                    else
                    {
                         printf("these month has 30 days ");
                    }
               }
          }
     }
     else
     {
          printf("invalid input ");
     }
     printf("\nGoodbyee..");
}
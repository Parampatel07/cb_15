// 12) Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
// https://in.pinterest.com/pin/81698180718875314/
#include <stdio.h>
void main()
{
     int date, month;

     printf("Enter any day ");
     scanf("%d", &date);
     printf("Enter any month ");
     scanf("%d", &month);

     if((date >= 21 && month == 3) || (date<=19 && month==4))
     {
          printf("this is aries ");
     }
     else if((date >=20 && month==4) || (date<=20 && month==5) )
     {
          printf("this is taurus");
     }
     else if((date>=21 && month==5) || (date<=20 && month==6))
          printf("this is gemini");                
}
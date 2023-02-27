// Write a programe to find out whether the user given year is milliuem year 
// 1000,2000,3000,4000,5000....
#include<stdio.h>
void main()
{
     int year;
     int millineum_year = 1000;
     printf("Enter any year ");
     scanf("%d",&year);
     // < , > , <= , >= , == , != 
     if ( year % 1000 == 0 )
     {
          printf("this is milliuem year ");
     }
     printf("\nGoodbyee..");
}
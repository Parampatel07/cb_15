// Write a programe to take time for 3 country take hours minutes.second and name of country
#include<stdio.h>
struct time
{
     int hours;
     float minutes_second;
     char country[25];
};
void main()
{
     struct time country1,country2;

     printf("Enter country 1 details ");
     printf("\nEnter hours ");
     scanf("%d",&country1.hours);
     printf("Enter minutes.second ");
     scanf("%f",&country1.minutes_second);
     printf("Enter country name ");
     scanf("%s",&country1.country);
     printf("\nEnter country 2 details ");
     printf("\nEnter hours ");
     scanf("%d",&country2.hours);
     printf("Enter minutes.second ");
     scanf("%f",&country2.minutes_second);
     printf("Enter country name ");
     scanf("%s",&country2.country);


     printf("\nCountry 1 details are");
     printf("\nhours = %d ",country1.hours);
     printf("\nminutes_second = %.2f ",country1.minutes_second);
     printf("\nname = %s ",country1.country);
     printf("\nCountry 2 details are");
     printf("\nhours = %d ",country2.hours);
     printf("\nminutes_second = %.2f ",country2.minutes_second);
     printf("\nname = %s ",country2.country);
}
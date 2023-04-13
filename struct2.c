// Write a programe to take time for 3 country take hours minutes.second and name of country
#include <stdio.h>
struct time
{
     int hours;
     float minutes_second;
     char country[25];
};
void main()
{
     struct time country[3];
     int count;
     for (count = 0; count < 3; count++)
     {
          printf("Enter details for country %d ", count + 1);
          printf("\nEnter hours ");
          scanf("%d", &country[count].hours);
          printf("\nEnter minutes_seconds ");
          scanf("%f", &country[count].minutes_second);
          printf("\nEnter your name ");
          scanf("%s", &country[count].country);
     }
     for(count=0;count<3;count++)
     {
          printf("\nCountry %d details are ",count+1);
          printf("\nhours = %d ", country[count].hours);
          printf("\nminutes = %f ", country[count].minutes_second);
          printf("\nName = %s ", country[count].country);
     }
}
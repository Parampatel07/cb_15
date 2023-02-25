// Write a programe to find bmi take input from user
// bmi = weight / meter * meter
#include <stdio.h>
void main()
{
     float weight, foot_to_inch,total_inch,meter,bmi;
     int foot, inch;
     printf("Enter your weight ");
     scanf("%f", &weight);
     printf("Enter your height in foot ");
     scanf("%d", &foot);
     printf("Enter your height in inch ");
     scanf("%d", &inch);
     // printf("weight = %f , foot = %d , inch = %d ", weight, foot, inch);
     // bmi = weight / meter * meter
     foot_to_inch = foot * 12;
     // printf("\nthe value of foot to inch is %f ",foot_to_inch);
     total_inch = foot_to_inch + inch;
     // printf("\nthe value of total inch is %f ",total_inch);
     meter = total_inch / 39.37;
     // printf("\nthe value of meter is %f ",meter);
     bmi = weight / (meter * meter);
     printf("\nthe value of bmi is %.2f ",bmi);
}
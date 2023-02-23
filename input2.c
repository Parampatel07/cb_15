// Write a programe to find bmi 
// bmi = weight / meter * meter 
#include<stdio.h>
void main()
{
     float weight,bmi;
     float inch_meter;
     int foot,inch,foot_inch;
     printf("Enter value of weight");
     scanf("%f",&weight);
     printf("Enter value of height in foot ");
     scanf("%d",&foot);
     printf("Enter value of height in inch ");
     scanf("%d",&inch);

     printf("\nThe value of wieght is %f ",weight);
     printf("\nThe value of foot is %d ",foot);
     printf("\nThe value of inch is %d ",inch);

     foot_inch = (foot * 12) + inch;
     printf("\nthe value of converted inch is %d",foot_inch);

     inch_meter = foot_inch / 39.37 ;
     printf("\nthe value of meter is %.2f",inch_meter);

     bmi = weight / (inch_meter * inch_meter);
     printf("\nthe value of bmi is %.2f ",bmi);






}
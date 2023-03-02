// Write a programe to findout user weight level using bmi chart accpet bmi from user 
#include<stdio.h>
void main()
{
     float bmi;

     printf("Enter your bmi ");
     scanf("%f",&bmi);

     if(bmi < 0)
     {
          printf("invalid input ");
     }
     else if(bmi < 18.5)
     {
          printf("You are under weight ");
     }
     else if(18.5 <= bmi && 24.9 > bmi)
     {
          printf("You are  normal weight");
     }
     else if(25 <= bmi && 29.9 > bmi)
     {
          printf("You are overweight ");
     }
     else if(30 <= bmi && 34.9 > bmi )
     {
          printf("You are Obese ");
     }
     else if(35 <= bmi)
     {
          printf("You are extremly obese ");
     }
     printf("\nGoodbyee..");



}
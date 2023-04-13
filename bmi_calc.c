// Write a programe to make a bmi calc using function 
#include<stdio.h>
float inch_to_meter(int inch)
{
     float meter;
     meter = inch / 39.37;
     return meter;
}
float foot_to_meter(int foot)
{
     return foot /3.281;
}
float get_total_meter(float a,float b)
{
     float answer ;
     answer = a + b;
     return answer;
}
float get_bmi(float meter,float weight)
{
     return weight / (meter * meter);
}
void main()
{
     int foot,inch;
     float weight,inch_meter,foot_meter,total_meter,bmi;
     printf("Enter your weight ");
     scanf("%f",&weight);
     printf("Enter your height in foot ");
     scanf("%d",&foot);
     printf("Enter your height in inch ");
     scanf("%d",&inch);
     inch_meter=inch_to_meter(inch);
     foot_meter=foot_to_meter(foot);
     total_meter=get_total_meter(inch_meter,foot_meter);
     printf("the value of total meter is %f ",total_meter);
     bmi = get_bmi(total_meter,weight);
     printf("\nThe value of bmi is %f ",bmi);
}
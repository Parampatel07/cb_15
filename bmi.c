// Write a programe to find bmi (body to mass index)
// bmi = wieght / meter * meter 
#include<stdio.h>
void main()
{
     float weight,bmi;
     float meter;

     weight = 45.45;
     meter = 1.20;

     bmi = weight / (meter * meter)  ;
     printf("the value of bmi is %.2f ",bmi);

}
// Write a programe to find area of circle 
// area = pi * r * r 
#include<stdio.h>
void main()
{
     float radius,pi=3.141592,area;

     printf("Enter value of radius ");
     scanf("%f",&radius);
     // printf("the value of radius is %f ",radius);
     area = pi * (radius * radius);
     printf("the value of area is %.2f ",area);
}
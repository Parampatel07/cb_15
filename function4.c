// Example of function without argument with return value 
// Write a programe to find area of cylinder 
#include<stdio.h>
float Getpi()
{
     return 3.14159;
}
void main()
{
     float radius,height,area,pi;
     printf("Enter value of radius ");
     scanf("%f",&radius);
     printf("Enter value of height ");
     scanf("%f",&height);
     pi  = Getpi();
     area = (2 * pi * radius * height) + (2 * pi * (radius*radius));
     printf("the area of cylinder is %f ",area);
}
// Write a programe to find area of triangle 
// area = height * base / 2;
#include<stdio.h>
void main()
{
     int height,base,area;
     printf("Enter value of height ");
     scanf("%d",&height);
     printf("Enter value of base ");
     scanf("%d",&base);
     area = height * base / 2;
     printf("area of triangle is %d ",area);
}
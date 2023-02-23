// Write a programe to peform split
// number = 56;
// first = 5 ,second = 60;
#include <stdio.h>
void main()
{
     int number, first, second;
     printf("\nEnter value of number only 2digit number ");
     scanf("%d",&number);
     first = number / 10;
     second = number % 10;
     printf("\nThe value of first is %d ", first);
     printf("\nThe value of second is %d", second);
}
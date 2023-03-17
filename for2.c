// Write a programe to print factorial of given number 
//  5 = 5 * 4 *3 * 2*1 = 120
#include<stdio.h>
void main()
{
     int number = 10,answer=0,number2=0;

     number2 = number * (number-1) * (number-2) * (number-3) * (number-4);
     //  (number-1) * (number-1) * (number-1) ;

     printf("%d ",number2); 
}
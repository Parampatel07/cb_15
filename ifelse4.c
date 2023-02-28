// Write a programe to findout wether the user given number is odd or even 
#include<stdio.h>
void main()
{
     int number,answer ;
     printf("Enter value of number ");
     scanf("%d",&number);
     // number = 56 ;
     answer = number % 2 ;
     if( answer != 0 )
     {
          printf("it is odd number ");
     }
     else
     {
          printf("it is even number ");
     }
     printf("\nGoodbyee..");
}
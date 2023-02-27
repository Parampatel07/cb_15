// Write a programe to check Wether the user is eligible for voting or not (18+)
#include<stdio.h>
void main()
{
     int age;

     printf("Enter your age ");
     scanf("%d",&age);

     if(age > 18)
     {
          printf("You are eligible for voting \n");
     }
     printf("Goodbyee..");
}
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int number;
     float number2;
     char letter;
     printf("Enter value of number ");
     scanf("%d",&number);
     printf("Enter value of number 2");
     scanf("%f",&number2);
     fflush(stdin);
     printf("Enter any one letter ");
     scanf("%c",&letter);

     printf("the value of number is %d \n",number);
     printf("the value of number 2 is %.2f \n",number2);
     printf("the value of letter is %c ",letter);

}
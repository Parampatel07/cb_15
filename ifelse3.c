// write a program to accept one letter from user. if letter is (a) then print message "it is first letter of abcd".
#include<stdio.h>
void main()
{
     char letter;
     printf("Enter any letter ");
     scanf("%c",&letter);
     if(letter == 'a')
     {
          printf("it is first letter of abcd ");
     }
     else
     {
          printf("it is random letter of abcd ");
     }
     printf("\nGoodbyee..");
}
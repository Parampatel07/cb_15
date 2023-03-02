// Write a programe to findout wether the user given letter is vowel or not 
#include<stdio.h>
void main()
{
     char letter ;

     printf("Enter any one letter ");
     scanf("%c",&letter);

     if(letter == 'a' || letter == 'e' || letter=='i' || letter=='o' || letter=='u')
     {
          printf("it is vowel ");
     }
     else
     {
          printf("it is consonent ");
     }
     printf("\nGoodbyee..");
}
// Example of function with argument without return value
#include <stdio.h>
#include<stdlib.h>
void printline(int count, char symbol)
{
     int flash = 0;
     printf("\n");
     for (flash = 0; flash < count; flash++)
     {
          printf("%c", symbol);
     }
     printf("\n");
}
void main()
{
     int symbol_count=0;
     char sign;
     printf("Enter number of symbol ");
     scanf("%d",&symbol_count);
     fflush(stdin);
     printf("Enter sign to print ");
     scanf("%c",&sign);
     printf("hello world");
     printline(symbol_count,sign);
}
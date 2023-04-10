// Example of function with argument without return value
#include <stdio.h>
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
     printf("Hello World ");
     printline(20,'$');
     printf("this is second hello world");
     printline(30,'-');
}
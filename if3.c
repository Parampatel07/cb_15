// Write a programe to findout out given 2 office is is office 1 greater or not 
#include<stdio.h>
void main()
{
     float lenght1,width1,lenght2,width2,area1,area2;

     printf("Enter value of lenght for office 1 ");
     scanf("%f",&lenght1);
     printf("Enter value of width for office 1 ");
     scanf("%f",&width1);
     printf("Enter value of lenght for office 2 ");
     scanf("%f",&lenght2);
     printf("Enter value of width for office 2 ");
     scanf("%f",&width2);

     area1 = lenght1 * width1;
     area2 = lenght2 * width2;

     if (area2 > area1)
     {
          printf("Office 1 is smaller ");
     }
     printf("\nGoodbyee..");
}
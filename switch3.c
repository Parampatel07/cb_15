// Write a programe to findout distance of planet from sun 
#include<stdio.h>
void main()
{
     int planet;

     printf("\nEnter 1 for mercury ");
     printf("\nEnter 2 for Venus ");
     printf("\nEnter 3 for Earth ");
     printf("\nEnter 4 for Mars ");
     printf("\nEnter 5 for Jupiter ");
     printf("\nEnter 6 for Saturn ");
     printf("\nEnter 7 for Uranus ");
     printf("\nEnter 8 for Neptune ");
     scanf("%d",&planet);

     switch(planet)
     {
          case 1:
          printf("the distance is 57,900,000");
          break;
          case 2:
          printf("the distance is 108,200,000");
          break;
          case 3:
          printf("the distance is 149,600,000");
          break;
          case 4:
          printf("the distance is 227,900,000");
          break;
          case 5:
          printf("the distance is 778,600,000");
          break;
          case 6:
          printf("the distance is 1,433,500,000");
          break;
          case 7:
          printf("the distance is 2,872,500,000");
          break;
          case 8:
          printf("the distance is 4,495,100,000 ");
          break;
          default:
          printf("Invalid input ");
          break;
     }
     printf("\nGoodbyee..");
}
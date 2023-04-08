// Write a programe to take string input form user
#include <stdio.h>
void main()
{
     char name[25], count = 0,loopcount;

     printf("Enter your name ");
     for (count = 0; count < 25; count++)
     {
          scanf("%c", &name[count]);
          if(name[count]=='\n')
          {
               break;
          }
     }
     loopcount = count;
     printf("\nYour name is ");
     for(count=0;count<loopcount;count++)
     {
          printf("%c", name[count]);
     }
     // printf("%c",name[0]);
     // scanf("%c",&name[1]);
     // scanf("%c",&name[2]);
     // scanf("%c",&name[3]);
     // scanf("%c",&name[4]);
     // scanf("%c",&name[5]);
     // scanf("%c",&name[6]);
     // scanf("%c",&name[7]);
}
// write a programe to make a calc using function
// ->addition,subraction,multiplication,division,maximum,minimum,equality
#include <stdio.h>
int getAdd(int num1,int num2)
{
     printf("the answer is %d ",num1+num2);
     return num1 + num2;
}
int getSub(int num1,int num2)
{
     printf("the answer is %d ",num1-num2);
     return num1 - num2;
}
int getMul(int num1,int num2)
{
     printf("the answer is %d ",num1*num2);
     return num1 * num2;
}
int getDiv(int num1,int num2)
{
     printf("the answer is %d ",num1/num2);
     return num1 / num2;
}
void getMax(int num1,int num2)
{
     if(num1>num2)
     {
          printf("num1 is greater");
     }
     else if(num2>num1)
     {
          printf("num2 is greater");
     }
}
void getMin(int num1,int num2)
{
     if(num1<num2)
     {
          printf("num1 is smaller");
     }
     else if(num2<num1)
     {
          printf("num2 is smaller");
     }
}
void getEquality(int num1,int num2)
{
     if(num1==num2)
     {
          printf("both are equall");
     }
     else 
     {
          printf("both are not equall");
     }
}
void main()
{
     int num1, num2, option;

     printf("Enter value of num1 ");
     scanf("%d", &num1);
     printf("Enter value of num2 ");
     scanf("%d", &num2);
     printf("\nSelect 1 for addition ");
     printf("\nSelect 2 for subtraction ");
     printf("\nSelect 3 for multiplication ");
     printf("\nSelect 4 for division ");
     printf("\nSelect 5 for maximum ");
     printf("\nSelect 6 for minimum ");
     printf("\nSelect 7 for equality ");
     printf("\nSelect any one option ");
     scanf("%d", &option);

     if(option==1)
     {
          //addition
          getAdd(num1,num2);
     }
     else if(option==2)
     {
          //subtraction
          getSub(num1,num2);
     }
     else if(option==3)
     {
          //multiplication
          getMul(num1,num2);
     }
     else if(option==4)
     {
          //division
          getDiv(num1,num2);
     }
     else if(option==5)
     {
          //maximum
          getMax(num1,num2);
     }
     else if(option==6)
     {
          //minimum
          getMin(num1,num2);
     }
     else if(option==7)
     {
          //equality
          getEquality(num1,num2);
     }
}
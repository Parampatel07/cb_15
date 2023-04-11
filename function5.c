//Example of function with argument and with return 
// Write a programe peform addition using function 
#include<stdio.h>
float GetAddition(float a,float b)
{
     int answer = 0;
     answer = a + b ;
     return answer;
}
void main()
{
     float num1,num2,answer;
     printf("Enter value of num1 ");
     scanf("%f",&num1);
     printf("Enter value of num2 ");
     scanf("%f",&num2);
     answer = GetAddition(num1,num2);
     printf("The value of answer is %.3f ",answer);
}
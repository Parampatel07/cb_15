// Write a C program to calculate income tax, gross income, net income from monthly income given by user 
// yearly income     tax rate
// <3,00,000         5%  
// >=3,00,000
// <5,00,000         10%  
// >=5,00,000
// <8,00,000         20%
// >=8,00,000        30%  
#include<stdio.h>
void main()
{
     int monthly_income,yearly_income,tax_rate=0,tax,gross_income;
     printf("Enter value of monthly income ");
     scanf("%d",&monthly_income);
     yearly_income = monthly_income * 12;
     printf("Your yearly income is %d ",yearly_income);
     if(yearly_income < 300000)
     {
          tax_rate = 5;
     }
     else if(yearly_income >=300000 && yearly_income <500000)
     {
          tax_rate = 10;
     }
     else if(yearly_income >=500000 && yearly_income<=800000)
     {
          tax_rate = 20;
     }
     else
     {
          tax_rate = 30;
     }
     tax = yearly_income * tax_rate / 100;
     printf("\nYour tax is %d ",tax);
     gross_income = yearly_income - tax ;
     printf("\nYour gross income is %d ",gross_income);
     printf("\nGoodbyee..");
}
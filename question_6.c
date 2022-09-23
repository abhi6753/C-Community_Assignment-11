//6. Write a program to calculate factorial of a number
//!5 =5*4*3*2*1
#include<conio.h>
#include<stdio.h>
int main()
{
   int num,i,fact=1;
   printf("Enter number:\n");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   fact = fact*i;
   if(num==0)
   fact=1;
   printf("Fcatorial of %d is %d",num,fact);
   getch();
   return 0;
}
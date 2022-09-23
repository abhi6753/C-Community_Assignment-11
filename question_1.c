//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
       sum+=i;
    }
    printf("Sum of first %d natural number is %d.",num,sum);
    getch();
    return 0;
}


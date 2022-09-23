//4. Write a program to calculate sum of squares of first N natural numbers
#include<conio.h>
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        sum = sum+i*i;
    }
    printf("Sum of first %d natural number is %d",num,sum);
    getch();
    return 0;  
}
//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum= sum+(i*i*i);
    }
    printf("Sum of cubes of first %d natural numbers is %d",num,sum);
    getch();
    return 0;
}
//7. Write a program to count digits in a given number
#include<conio.h>
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    if(num==0)
    count = 1;
    while (num)
    {
        count++;
        num/=10;
    }
    printf("Total digits = %d",count);
    return 0;
    getch();
}
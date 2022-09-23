//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    for(i=1;i<=2*num;i++)
    {
        if(i%2==0)
        {
          sum+=i;
        }     
    }
    printf("Sum of first %d even natural number is %d",num,sum);
    getch();
    return 0;
}
//8. Write a program to check whether a given number is a Prime number or not
//
#include<conio.h>
#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count==2)
    printf("%d is a prime number",num);
    else
    printf("%d is not prime number",num);
    getch();
    return 0;
}
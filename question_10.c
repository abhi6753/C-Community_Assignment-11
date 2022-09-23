//10. Write a program to reverse a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0,rem,reverse=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    int temp = num;
    while(temp)
    {
        count++;
        rem = temp%10;
        reverse = reverse*10+rem;
        temp/=10;
    }
    printf("Reverse of %d is %d",num,reverse);
    getch();
    return 0;
}
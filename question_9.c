//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,L;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L=L+(a>b?a:b))
    {
        if(L%a==0&&L%b==0)
        break;
    }
    printf("Lcm of %d and %d is %d",a,b,L);
    getch();
    return 0;

}
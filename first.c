#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,c=1;

    printf("Enter your Numbers:");
    scanf("%d",&a);
    printf("Enter your power number:");
    scanf("%d",&b);
    for (i=1;i<=b;i++)
    {
       c=c*a;
    }
    printf("Result is:%d",c);
getch();
}

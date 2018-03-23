#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the first value :");
    scanf("%d", &a);
    printf("Enter the Second Value :");
    scanf("%d", &b);
    c = a-b;
    d = b-a;
    if (a<b)
    {
    printf("%d", d);
    }
    else if (b<a)
    {
    printf("%d", c);
    }
getch();
}

#include <stdio.h>
#include<conio.h>
void main() 
{
	int a,b,c,i;
	char op;
  clrscr();
	printf("\n enter the number and operator(/ or % ) and a number :\n");
	for(i=1;i<=4;i++)
	{
		scanf("%d %c %d",&a,&op,&b);
	}
		if(op=='/')
		{
			c=a/b;
			printf("%d\n",c);
		}
		else
		{
			c=a%b;
			printf("%d\n",c);
		}
getch();
}

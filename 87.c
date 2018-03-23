#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,gcd;
scanf("%d %d",&x,&y);
if(x==0)
{
	printf("%d",y);
	
}
else
{
	while(x!=0&&y!=0)
	{
		if(x>y)
		x=x-y;
		else
		y=y-x;
	}
	printf("%d",x);
}
	getch();
}

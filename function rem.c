#include<stdio.h>
int rem(int a,int b);
int main()
{
	int a,b;
	printf("enter the dividend: ");
	scanf("%d",&a);
	printf("enter the divider: ");
	scanf("%d",&b);
	rem(a,b);
	
	return 0;
}
int rem(int x,int y)
{
	int c;
	c=x%y;
	printf("Reminder of %d diveded by %d is %d",x,y,c);
}

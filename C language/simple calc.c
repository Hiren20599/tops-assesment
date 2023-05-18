#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the number 1:- ");
	scanf("%d",&a);
	printf("enter the number 2:- ");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("\n\n%d + %d = %d",a,b,c);
	printf("\n%d - %d = %d",a,b,d);
	printf("\n%d * %d = %d",a,b,e);
	printf("\n%d / %d = %d",a,b,f);
	
	return 0;
	
}

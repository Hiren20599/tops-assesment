#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	printf("before swap:-\nthe value of a= ");
	scanf("%d",&a);
	printf("the value of b= ");
	scanf("%d",&b);
	swap(a,b);
	printf("after swap:-\nthe value of a= %d\nthe value of b= %d",a,b);
	
	return 0;
}
void swap(int x,int y)
{
	int z;
	z = x;
	x = y;
	y = z;
}

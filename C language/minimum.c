#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three values: \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n");
	if(a<b)
	{
		if(a<c)
		{
			printf("Number 1 is minimum");
		}
		else
		{
			printf("Number 3 is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("Number 2 is minimum");
		}
		else
		{
			printf("Number 3 is minimum");
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number whose table you want:-");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",i,n,i*n);
	}
	return 0;
}

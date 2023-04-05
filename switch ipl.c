#include<stdio.h>
int main()
{
	int team;
	printf("enter the number of team:- ");
	scanf("%d",&team);
	switch(team)
	{
		case 1:
			printf("MUMBAI INDIANS");
			break;
		case 2:
			printf("CHENNAI SUPER KINGS");
			break;
		case 3:
			printf("ROYAL CHALLENGERS BANGLORE");
			break;
		case 4:
			printf("RAJASTHAN ROYALS");
			break;
		case 5:
			printf("GUJARAT TITANS");
			break;
		case 6:
			printf("PUNJAB KINGS");
			break;
		case 7:
			printf("KOLKATA NIGHT RIDERS");
			break;
		case 8:
			printf("SUNRISERS HYDRABAD");
			break;
		case 9:
			printf("DELHI CAPITALS");
			break;
		case 10:
			printf("LAKHNAU SUPER GIANTS");
			break;
		default:
			printf("enter valid number");
	}
}

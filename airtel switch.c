#include <stdio.h>
int main()
{
	int offer;
	printf("1.Data Deals\n");
	printf("2.Daily Bundles\n");
	printf("3.Go Monthly\n");
	printf("4.Okoa Data\n");
	printf("5.Hot Minutes\n");
	printf("select an offer:");
	scanf("%d",&offer);
	switch(offer)
	{
	case 1:printf("Data Deals selected\n");	
		break;
	case 2:printf("Daily Bundles selected\n");
		break;
	case 3:printf("Go monthly selected\n");
		break;
	case 4:printf("Okoa Data selected\n");
		break;
	case 5:printf("Hot Minutes selected\n");
		break;
    default:printf("Invalid choice\n");
	}
	return 0;
}
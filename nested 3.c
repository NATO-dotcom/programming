#include<stdio.h>
int main()
{
	int i , k;
	for (k = 1; k < 10; k++)
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d\t" , i * k);
		}
		printf("\n");
	}
	return 0;
}
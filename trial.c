#include<stdio.h>
int main()
{
	int rows, cols;
	for(rows = 0; rows < 5; rows++)
	{
		for(cols = 0; cols < 5 - rows; cols++)
		{
			printf(" ");
		}
		for(cols = 0; cols <=5 - rows; cols++)
		{
			printf("*");
		}
			printf("\n");
	}
	return 0;
}

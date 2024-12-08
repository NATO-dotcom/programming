#include<stdio.h>
int main()
{
	int rows, cols;
	for(rows = 0; rows < 8; rows++)
	{
		for(cols = 0; cols <=rows; cols++)
		{
			printf(" ");
		}
		for(cols = 0; cols < 8-rows; cols++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

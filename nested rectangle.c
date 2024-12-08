#include<stdio.h>
int main()
{
	int rows, cols;
	for(rows = 0; rows < 10; rows++)
	{
		for(cols = 0; cols < 8; cols++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

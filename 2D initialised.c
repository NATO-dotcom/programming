#include <stdio.h>
int main()
{
	int marks[3][2]={23,40,34,12,24};  //2D
	int row, col;
	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 2; col++)
		{
			printf("%d\t" , marks[row][col]);
		}
		printf("\n");
	}

	return 0;
}

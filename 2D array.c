#include <stdio.h>
int main(int argc, char** argv)
{
	int marks[3][2];  //2D
	int row, col;
	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 2; col++)
		{
			printf("%d  " , marks[row][col]);
		}
		printf("\n");
	}

	return 0;
}

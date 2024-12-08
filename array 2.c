#include <stdio.h>
int main(int argc, char** argv)
{
	int marks[6];  //1D
	int i;
	for(i = 0; i < 6; i++)
	{
		marks[i] = 10 * (i + 1);
	}
	printf("%d" , marks[1]);
	return 0;
}

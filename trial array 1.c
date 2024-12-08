#include <stdio.h>
int main(int argc, char** argv)
{
	int m[6], i;
	printf("enter the value i:");	
    for(i = 0; i < 6; i++)
	{
		printf("%d", i);
		scanf("%d", &m[i]);
	}
	for(i = 0; i < 6; i++)
	{
		printf("%d" , m[i]);
	}
	printf("\n");
	return 0;
}

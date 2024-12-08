#include <stdio.h>
int main()
#define n 5
{
	int i,a[n];
	printf("enter i");
	for(i = 0; i < n; i++)
	{
		printf("%d", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}

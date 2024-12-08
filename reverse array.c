#include <stdint.h>
int main()
{
    int marks[5],i;
    printf("enter marks:");
   for(i=0;i<5;i++)
	{
		printf("%d\n", i);
		scanf("%d", &marks[i]);
	}
	for(i=0;i<5;i++)
	{
		
		printf("%d ", marks[i]);
	}
	printf("\n");
	for(i=4;i>=0;i--)
    {
		printf("%d ", marks[i]);
	}
	return 0;
} 
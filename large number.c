#include <stdio.h>
int main()
{
    int a,b;
	printf("enter a");
	scanf("%d", &a);
	printf("enter b");
	scanf("%d", &b);
	if(a>b)
	{
		printf("a is larger");
	}
	else if(a==b)
	{
	   printf("they are equal");	
	}
	else
	{
		printf("b is larger");
	}
	return 0;
}
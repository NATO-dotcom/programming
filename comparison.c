#include <stdio.h>/*a program to compare two numbers
 if they are equal or not*/
int main()
{
    int a,b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    if (a==b)
    {
		printf("a is equal to b");
	}
	else
	{
		printf("a is not equal to b");
	}
	return 0;
}

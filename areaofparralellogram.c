#include <stdio.h>
int main()
{
	float a, b, h, A;
	printf("enter a");
	scanf("%f", & a);
	printf("enter b");
	scanf("%f", & b);
	printf("enter h");
	scanf("%f", & h);
	A = 0.5 * (a + b) * h;
	printf("%f", A);
	return 0;
}

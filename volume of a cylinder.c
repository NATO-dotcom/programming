#include <stdio.h>
int main()
{
	float volume, radius, height;
	printf("Enter the radius of the cylinder");
	scanf("%f", &radius);
	printf("Enter the height of the cylinder");
	scanf("%f", &height);
	volume = 3.142 * radius * radius * height;
	printf("%f", volume);
	return 0;
}

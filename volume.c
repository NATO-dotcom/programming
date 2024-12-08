#include <stdio.h>
#define pi 3.142
/*a program to calculate the volume of a cylinder*/
int main()
{
	float v,r,h;
	printf("enter r");
	scanf("%f",&r);
	printf("enter h");
	scanf("%f",&h);
	v=pi*r*r*h;
	printf("the v=%f",v);
	return 0;
}

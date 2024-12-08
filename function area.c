#include <stdio.h>
float calcarea(float r);//fuction declaration
int main()
{
    float numb;
    printf("enter numb");
	scanf("%f",&numb);
 	printf("area= %f", calcarea(numb));//function call calc...
	return 0;
}
float calcarea(float r)
{
    float area;	
    area=3.142*r*r;
    return area;
}
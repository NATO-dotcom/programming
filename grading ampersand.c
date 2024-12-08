#include <stdio.h>
int main()
{
    int marks;
	printf("enter marks");
	scanf("%d", &marks);
	if(marks>=70 && marks<=100)
	{
		printf("excellent, grade A");
	}
    else if(marks>=60 && marks<=69)
	{
		printf("good, grade B");
	}	
	else if(marks>=50 && marks<=59)
	{
		printf("average, grade C");
	}
    else if(marks>=40 && marks<=49)
	{
		printf("below average, grade D");
	}
	else
	{
		printf("poor, grade E");
	}				
	return 0;
}
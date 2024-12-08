#include <stdio.h>
int main()
{
	int marks;
	char grade;
	printf("enter marks:");
	scanf("%d" , &marks);
	if(marks <40)
		printf("grade:E");
	else if(marks <50)
		printf("grade:D");
	else if(marks <60)
		printf("grade:C");
	else if(marks <70)
		printf("grade:B");
	else
		printf("grade:A");
	return 0;
}

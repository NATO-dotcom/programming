#include <stdio.h>
int main()
{
	int marks;
	char grade;
	printf("enter marks:");
	scanf("%d" , &marks);
	if(marks >= 70)
		printf("grade:A");
	else if(marks >= 60)
		printf("grade:B");
	else if(marks >= 50)
		printf("grade:C");
	else if(marks >= 40)
		printf("grade:D");
	else
		printf("grade:E");
	return 0;
}

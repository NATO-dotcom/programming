#include <stdio.h>
int main()
/*a program to check whether a student is adult*/
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age<18)
	{
		printf("not an adult");
	}
	
	return 0;
}
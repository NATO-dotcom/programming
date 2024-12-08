#include <stdio.h>
int main()
{
	int score;
	printf("enter score 1-5:");
	scanf("%d", &score);
	if(score >= 5)
	printf("excellent");
	else if(score >= 4)
	printf("good");
	else if(score >= 3)
	printf("average");
	else if(score >= 2)
	printf("below average");
	else
	printf("poor");
	return 0;
}

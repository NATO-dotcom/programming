#include <stdio.h>
int main()
{
	int score;
	printf("enter score 1-5:");
	scanf("%d", &score);
	if(score < 2)
	printf("poor");
	else if(score < 3)
	printf("below avg");
	else if(score < 4)
	printf("average");
	else if(score < 5)
	printf("good");
	else
	printf("excellent");
	return 0;
}

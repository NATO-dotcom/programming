// #include <stdio.h>
int main()
{
	int score;
	printf("enter score 1-5:");
	scanf("%d", &score);
	switch(score)
	{
case1:
		printf("poor");
		break;
case2:
		printf("below avg");
		break;
case3:
		printf("average");
		break;
case4:
		printf("good");
		break;
case5:
		printf("excellent");
		break;
	default:
		printf("invalid");
	}
	return 0;
}

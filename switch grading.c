#include <stdio.h>
int main()
{
	float marks;
	int score;
	printf("enter marks 1-100:");
	scanf("%f", &marks);
	printf("marks = %f\n", marks);
	score = (int)marks / 10;
	switch(score)
	{
	case 10:
	case 9:
	case 8:
	case 7:
		printf("excellent, grade A");
		break;
	case 6:
		printf("good, grade B");
		break;
	case 5:
		printf("average, grade C");
		break;
	case 4:
		printf(" below average, grade D");
		break;
	case 3:
	case 2:
	case 1:
		printf("poor, grade E");
		break;
	default:
		printf("invalid");
	}
	return 0;
}
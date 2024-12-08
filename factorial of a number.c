#include <stdio.h>
int main(int argc, char** argv)
{
	int n,i;
	 int f=1;
	printf("enter a positive n:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("%d",f,n);
	return 0;
}
#include <stdio.h>
int fact(int n);//function declaration
int main()
{
	int num,y;
	printf("enter num");
	scanf("%d", &num);
	y = fact(num); //function call
	printf("factorial =%d", y);
}
int fact(int n)
{
	int ans=1;
	while(n>1)
	{
	    ans=ans*n;
		n--;	
	}
	return ans;
}

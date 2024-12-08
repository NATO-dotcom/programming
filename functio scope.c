#include <stdio.h>
int x=10;//global or file scope
int fact(int n);//function scope
int main()
{
	printf("%d\n",x);
    int x=20;//local scope
    printf("%d",x);
}
int fact(int n)
{
	int ans;
}   
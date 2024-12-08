#include<stdio.h>

//function declaration
int addition(int num1, int num2);

int main()
{
    //local variable definition
    int answer;
    int num1 = 10;
    int num2 = 5;
    
    //calling a function to get addition value
    answer = num1+num2;

    printf("The addition of two numbers is: %d\n",answer);
    return 0;
}


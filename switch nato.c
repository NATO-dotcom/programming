#include<stdio.h>

int main()
{
    int a;
    printf("Please enter a no between 1 and 5: ");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
        printf("You chose One");
        break;

        case 2:
        printf("You chose Two");
        break;

        case 3:
        printf("You chose Three");
        break;

        case 4:
        printf("You chose Four");
        break;

        case 5:
        printf("You chose Five");
        break;

        default :
        printf("Invalid Choice. Enter a no between 1 and 5");
        break;
    }
} 
#include<stdio.h>
int main()
{
   int age;
    printf("Enter you age:");
   scanf("%d", &age);
   g: //label name
     printf("you are Eligible\n");
   s: //label name
     printf("you are not Eligible\n");  
   if(age>=18)
        goto g; //goto label g
   else
        goto s; //goto label s
    return 0;
}
#include <stdio.h>
int main(int argc, char** argv)
{
	int marks[6]={23,34,56,73,39,99};  //1D
	marks[2]=56;
    marks[5]=99;
    printf("%d" ,marks[2]);
	return 0;
}
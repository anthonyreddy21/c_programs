
/*
	Write a C program to swap two numbers using bitwise operator
*/

#include<stdio.h>

int main()
{

	int a=10,b=5;
	
	printf("before swapping\n a = %d\tb = %d\n",a,b);
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("after swapping\n a = %d\tb = %d\n",a,b);

	return 0;
}


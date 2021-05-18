//Write a C program to check whether a number is even or odd using bitwise operator.


/*
enter number
5
given number is 5
enter number
2
given number is 2
even
*/

#include <stdio.h>

int main()
{
	int a;
	
	printf("enter number\n");
	scanf("%d",&a);
	
	printf("given number is %d\n",a);
	
	if(a&1==1)
		printf("odd");
	else
		printf("even");
	
	return 0;
}



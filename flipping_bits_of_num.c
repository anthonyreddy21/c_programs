 // Write a C program to flip bits of a binary number using bitwise operator.

/*

enter number
15
Before flipping bits of a number is 15
After flipping bits of a number is -16

enter number
0
Before flipping bits of a number is 0
After flipping bits of a number is -1

enter number
11
Before flipping bits of a number is 11
After flipping bits of a number is -12
*/
    
#include <stdio.h>

unsigned int flipbts(unsigned int n)
{
	n=~n;
	return n;

}

int main()
{
	unsigned int n1,n;
	
	printf("enter number\n");
	scanf("%d",&n);
	
	printf("Before flipping bits of a number is %d\n",n);
	
	unsigned int (*fun)(unsigned int)=flipbts;
	
	n1=fun(n);
	
	printf("After flipping bits of a number is %d",n1);
}






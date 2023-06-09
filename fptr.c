
#include<stdio.h>

void fun(int a)
{

	printf("a = %d\n",a);

}

int main()
{

	int i = 10;
	
//	void (*fptr)(int) = &fun;
	void (*fptr)(int) = fun;
	
//	(*fptr)(i);
	fptr(i);
	
	return 0;

}





#include<stdio.h>

int main()
{

	int i=10,y=111;
	
	int *const ptr = &i;
	printf("i = %d, ptr = %d, addr of ptr = %p\n", i,*ptr,ptr);
	ptr=&y;
	//*ptr=120;
	printf("y = %d, ptr = %d, addr of ptr = %p\n", i,*ptr,ptr);
		
	
	
	return 0;

}


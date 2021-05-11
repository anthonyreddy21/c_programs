#include<stdlib.h>
void *Memmove(void *s1, const void *s, unsigned int n)
{
	int i;
	char *temp;
	const char *src = (const char *)s; 
   	char *dest = (char *)s1; 

	temp = (char *)malloc(n* sizeof(char));
	
	for(i = 0; i <n; i++)
		*(temp+ i ) = *(src+ i);

	for(i = 0; i < n; i++)
		*(dest+i) = *(temp+i);
	free(temp);
return dest;
}

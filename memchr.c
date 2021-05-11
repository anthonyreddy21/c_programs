#include<stdio.h>
void *Memchr(const void *s, int c, unsigned int n)
{
int i;
char *s1=(char *)s;
 for (i = 0; i < n; i ++) {
        if ( s1[i] == (unsigned char) c) 
	return (void*) (s1 + i);
	else 
	s1++;
    }
    return NULL;
	
}

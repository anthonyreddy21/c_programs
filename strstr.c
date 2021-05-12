#include<stdio.h>
char *Strstr(const char *s1, const char *s)
{
while (*s1) 
	  {
	    char *m = (char *)s1;
	    char *sub= (char *)s;
 // If first character of sub string match, check for whole string
	while (*s1 && *sub && *s1 == *sub) 
	{
	      s1++;
	       sub++;
	}
		    // If complete sub string match, return starting address 
	if (!*sub)
		return m;
		s1=m+1;	// Increament main string 
	  }
	  return NULL;
}

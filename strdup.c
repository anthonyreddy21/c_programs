#include<stdlib.h>
char *Strdup(const char *s)
{
 unsigned int i,length;
for (i = 0;s[i] != '\0'; i++)
     	length++;
char *s1=malloc(length+1);
     for (i = 0;s[i] != '\0'; i++)
         s1[i] = s[i];
         s1[i] = '\0';
	return s1;
}

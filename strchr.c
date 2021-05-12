#include<stdio.h>
char *Strchr(const char *s, int c)
{
char *s1=(char *)s;
while(*s1 != c && *s1 != '\0') {
      s1++;
   }
   if(*s1 == c) 
      return s1;
   else 
      return NULL;   
}

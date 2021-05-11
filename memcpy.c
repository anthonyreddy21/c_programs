void *Memcpy(void *s1, const void *s, unsigned int n) 
{
char *dest=(char *)s1;
const char *src=(const char *)s;
   for (int i=0; i<n; i++) 
       dest[i] = src[i]; 
return dest;
} 

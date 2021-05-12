char *Strcpy(char *s1,const char *s)
{
 unsigned int i;
     for (i = 0;s[i] != '\0'; i++)
         s1[i] = s[i];
         s1[i] = '\0';
	return s1;
}

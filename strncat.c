char *Strncat(char *s1, const char *s, unsigned int n)
{
               unsigned int i,length=0;
    	for (i = 0;s1[i] != '\0'; i++)
     	length++;
        
	for (i = 0 ; i < n && s[i] != '\0' ; i++)
         {
	s1[length] = s[i];
	length++;
	}
          s1[length] = '\0';

         return s1;
           
}

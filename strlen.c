unsigned int Strlen(const char *s)
{
unsigned int length=0,i;
for(i=0;s[i]!='\0';i++)
length++;
return length;
}

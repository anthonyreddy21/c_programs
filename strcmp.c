#include"header.h"
int Strcmp(const char *s1, const char *s2)
{
int i=0;
    while((s1[i]!='\0') || (s2[i]!='\0'))
    {
        if(s1[i] > s2[i])
            return SUCCESS;
        if(s1[i] < s2[i])
            return NEGATIVE;
        i++;
    }

    return FAILURE;
}


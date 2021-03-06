#include"header.h"
int Memcmp(const void *s1,const void *s2,unsigned int n)                    
{
    unsigned char u1, u2;

    for ( ; n-- ; s1++, s2++) {
	u1 = * (unsigned char *) s1;
	u2 = * (unsigned char *) s2;
	if ( u1 != u2) {
	    return (u1-u2);
	}
    }
    return FAILURE;
}

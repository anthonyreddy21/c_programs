

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

	char *str,*dest;
	char *ptr;
		
	str = (char*)malloc(64*sizeof(char));
	dest = (char*)malloc(64*sizeof(char));
	
	printf("enter the main string\n");
	scanf("%[^\n]s",str);
/*
	getchar();

	printf("enter the sub string\n");
	scanf("%[^\n]s",dest);	
*/

	for(int i=0;i<str[i] != '\0';i++)
	{	
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	
	printf("str = %s\n",str);

}






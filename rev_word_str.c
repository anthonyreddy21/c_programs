
//	input ::  "Hi Hello how are you"
//	output::  "you are how hello hi"



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  	char str[100], revstr[100];
  	int i, j, k=0,n=0;
 
  	printf("enter the string\n");
	scanf("%[^\n]",str);
  	
  	n = strlen(str) - 1;
  	
  	printf("\n *****  Given String in Reverse Order  ***** \n"); 	   	

	for(int i=0,j=n;i!=j;i++,j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp; 
	}

	printf("\n Given String in Reverse Order = %s\n", str); 
  	return 0;
}




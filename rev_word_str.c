
//	input ::  "Hi Hello how are you"
//	output::  "you are how hello hi"



#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*
int main()
{

	char str[128],s[128];
	int n=0,len=0;
	char temp;

	printf("enter the string\n");
	scanf("%[^\n]*%c",str);

	printf("after enter the string\ninput string is = %s\n",str);

	n = strlen(str);

	//for(int i=0;i<n;i++)
	//{
		for(int j=n;j>0;j--)
		{
			//j = ntemp; 
			int cnt = 0;
			
			if(str[j] != ' ')
				cnt++;
			else
			{
				int d = n - cnt+1;
				strcpy(s,str+d);
				s[cnt+1] = ' ';
				j--;
				cnt++;
			}
		}
	//}
	printf("string is = %s\n",s);
}*/


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
	
	
	
/*	for(i = 0; i <= n; i++)
	{
		revstr[k] = str[i];
		k++;
	}*/
	//revstr[k] = '\0';
	printf("\n Given String in Reverse Order = %s\n", str); 
  	return 0;
}




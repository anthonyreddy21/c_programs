
#include<stdio.h>
#include<string.h>

void reverse(char *str)
{

	printf("str = %s\n",str);
	int pos=0;
	
	printf("enter position\n");
	scanf("%d",&pos);
	
	int n = strlen(str)-1;
	printf("n = %d\n",n);

	for(int i = pos;i < n; i++,n--)
	{
		char temp = str[i];
		str[i] = str[n];
		str[n] = temp;
	}
		
	printf("output = %s\n",str);

}


int main()
{

//	char str[32] = "Ashok Naveen";

	char str[32];	
	
	printf("enter a string\n");
	scanf("%[^\n]s",str);
	
	void (*fptr)(char*) = reverse;

	(*fptr)(str);	
	
	return 0;

}


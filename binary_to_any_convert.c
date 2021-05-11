
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char *ptr;

char convert(int base,int num)
{
	
	int i,size,rem,newnum=0,temp=0,j;
	char str[32],s[32];
	
	temp = num;

	if(base > 36)
	{
		printf("NOT Possible\n");
		return 0;
	}

	for(i=0;num > 0;i++)
	{
		rem = num % base;

		if(rem <= 9)
			rem = rem + 48;
			
		else
			rem = rem +  55;	

		num = num/base;

		str [i] = rem; 
	}
 	str[i]='\0';

	size = strlen(str);
	for(i=size-1,j=0;i>=0;i--,j++)
		s[j] = str[i];

	s[j]='\0';

	return str;
}

int main()
{

	int n,r;
	
	printf("enter number\n");
	scanf("%d",&n);
	
	printf("enter base\n");
	scanf("%d",&r);

	ptr = (char*)malloc(32*sizeof(char));

	ptr = convert(r,n);

	printf("%s\n",*ptr);

	free(ptr);

}



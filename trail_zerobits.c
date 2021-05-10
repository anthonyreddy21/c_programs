
#include<stdio.h>

#define SIZE 8*sizeof(int)

int main()
{

	int a=0,b=0;
	
	printf("enter a number \n");	
	scanf("%d",&a);

	for(int i=0;i<SIZE;i++)
	{
		if((a & (1 << i)) == 0)
			b++;
		else
			break; 
	}
	printf("binary representation of number is \n");
	for(int i=31;i>=0;i--)
	{
		//num = (num>>i)&1;
		printf(" %d ",(a>>i)&1);
	}
	
	printf("\nin number n = %d,  trailing bits = %d\n",a,b);

	return 0;
	
}


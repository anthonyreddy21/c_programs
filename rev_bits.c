
#include<stdio.h>

int main()
{

	int num=0;
	unsigned int bits = 8*sizeof(int); 
	int temp=0,rev_num=0;

	printf("enter a number to reverse its bits\n");
	scanf("%d",&num);
	
	printf("binary representation of number is \n");
	for(int i=31;i>=0;i--)
		printf(" %d ",(num>>i)&1);
  
	for (int i = 0; i < bits; i++) 
	{ 
		temp = (num & (1 << i)); 
		if(temp) 
		rev_num |= (1 << ((bits - 1) - i)); 
	} 
   
   	printf("\nrev no. is %d\n",rev_num);

	printf("binary representation of reversed number is \n");   
	for(int i=31;i>=0;i--)
		printf(" %d ",(rev_num>>i)&1);
		
	printf("\n");
   
	return 0; 

}    


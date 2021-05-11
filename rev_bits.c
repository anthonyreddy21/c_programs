//      Write an Efficient C Program to Reverse Bits of a Number


#include <stdio.h>

int main()
{

	int i,num=0,x=0,temp=0;

	printf("enter the number to reverse the bits\n");
	scanf("%d",&num);

	for(int j=31;j>=0;j--)
	printf("%d ",num >> j & 1);				//  for printing the actual number in bits
	printf("\n");

	for(i=0;i<32;i++)					//   reversing the number
	{
		temp = (num >> i) & 1;
		if(temp == 1)
		{
			x |= (1 << 31-i);
		}
		
	}

	for(int j=31;j>=0;j--)
	printf("%d ",x >> j & 1);

	printf("\n");

}

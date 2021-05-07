//		Write a program to count set bits in an integer

#include <stdio.h>

int cnt_bit(int num)
{
	int cnt=0;

	for(int i=0;i<32;i++)
	{
		if((num>>i) & 1 == 1)			//    ">>" to find the last bit and "&" with 1 gives "1" if last bit is "1" otherwise it gives  "0"
			cnt++;
	}
	return cnt;

}

int main()
{

	int n,cnt;

	printf("enter number to count no. of bits set\n");
	scanf("%d",&n);

	printf("num in binary is\n");

	for(int i=0;i<32;i++)
	{
		num = (n>>i)&1;
		printf(" %d ",(num>>i)&1);
	}

	printf("\n");

	cnt = cnt_bit(n);

	printf("no. of bits set are :: %d\n",cnt);

}

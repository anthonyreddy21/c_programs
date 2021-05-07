//		Swap two nibbles of a byte

#include <stdio.h>

int swap_nibble(int num)
{

	int j=4,n =15,new=0;

	for(int i=1;i<=4;i++)
	{

		new = ((num & n) << j) | (new = num & (n<<j));
		j += i*4;		

	}

	return new;

}

int main()
{

	int num,new;

	printf("enter the number to swap nibbles\n");
	scanf("%d",&num);

	printf("before swap nibble num= ");
	for(int i=0;i<32;i++)
	printf("%d ",(num>>i)&1);

	printf("\n");

	new = swap_nibble(num);

	printf("after swap nibble num = ");

	for(int i=0;i<32;i++)
	printf("%d ",(new>>i)&1);

	printf("\n");
}


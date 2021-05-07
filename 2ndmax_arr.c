
#include<stdio.h>

int main()
{

	int arr[] = {-7,2,3,8,6,6,75,38,3,2};
	int size = 10;
	int max1,max2;
	
	if(arr[0] >= arr[1])
	{
		max1 = arr[0];
		max2 = arr[1];
	}
	else
	{
		max1 = arr[1];
		max2 = arr[0];
	}
/*	
	for(int i=2;i<size;i++)
	{
		if(arr[i] > max1)
		{
			if(arr[i] > max1)
			{
				max2 = max1;
				max1 = arr[i];
			}
		}
	}
*/	
	for(int i=2;i<size;i++)
	{
		if(arr[i] > max1)
		{
		    max2 = max1;
		    max1 = arr[i];
		}
		else if(arr[i] > max2 && arr[i] < max1)
		{
		    max2 = arr[i];
		}
	}
	
	printf("max1=%d\nmax2=%d\n",max1,max2);
}

		





/*	
Write a C program to count frequency of each element in an array.
*/

#include<stdio.h>

int main()
{

//	int a[] = {2,1,5,1,7,4,3,2,1,5,5,4,6,7,2,1};

	int size,count=0;
	int temp[100],a[100];
	
	printf("Enter size of array: ");
    	scanf("%d", &size);

    	printf("Enter elements in array: ");
    
    	for(int i=0; i<size; i++)
    	{
        	scanf("%d", &a[i]);
        	temp[i] = -1;
    	}
	
	for(int i=0; i<size; i++)
    	{
		count = 1;
		for(int j=i+1; j<size; j++)
		{
		    	if(a[i]==a[j])
			{
		        	count++;
		        	temp[j] = 0;
            		}
        	}

		if(temp[i] != 0)
		    	temp[i] = count;
    	}
 	
		printf("\nFrequency of all elements in the array : \n");
		for(int i=0; i<size; i++)
		{
			if(temp[i] != 0)
				printf("%d occurs %d times\n", a[i], temp[i]);
		}

    	return 0;

}




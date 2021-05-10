
#include<stdio.h>

int main()
{

	int a[] = {1,2,2,3,4,4,4,5,6};
	int j=0,arr_size = 9;
	
	for(int i=0;i<arr_size;i++)
	{
	
		if(a[i] != a[j])
		{
			j++;
			a[j] = a[i];
		//	printf("a[i]=%d\ta[j]=%d\t",a[i],a[j]);
		}
		//printf("\n");
	}
	arr_size = j+1;
	
	for(int i=0;i<arr_size;i++)
		printf("%d\t",a[i]);
	printf("\n");

}


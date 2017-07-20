#include <stdio.h>

int main()
{
	int arr[6]={23,42,4,16,8,15};
	
	int temp;
	int i,j,k;
  
	for(i = 0;i<5;i++)
	{
		if(arr[i] > arr[i+1])
		{
			for(j=i+1;j>0;j--)
			{
				if(arr[j] < arr[j-1])
				{
					temp = arr[j];
				    arr[j] = arr[j-1];
				    arr[j-1] = temp;


				}//end of second if

			}//end of second for loop
			


		}//end of first if

	}//end of for loop

    printf("Array after insertion sort :\n");
	for(k =0;k<6;k++)
	{
		printf("%d\n",arr[k]);

	}//end pf for loop

  return 0;
}//end of main

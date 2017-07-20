#include <stdio.h>
int main()
{
	int arr[8]={7,4,5,3,1,8,2,6};
	int i,j=7,temp,k;
	while (j>0)
	{


	for (i = 0;i<j;i++)
	{
		if(arr[i] > arr[i+1])
		{
			temp= arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;

		}//end of if


	}//end of first for loop
      j--;
}//end of while loop
printf("array after buble sort\n");
for(k = 0;k<8;k++)
{
	printf("%d\n",arr[k]);

}//end of for loop
}//end of main

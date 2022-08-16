/*merge two arrays in sorted order*/
#include<stdio.h>
int main()
{
	int a1,a2,temp,i;
	printf("Enter no of elements of array1:");
	scanf("%d",&a1);
	printf("Enter the no of elemnts of array2:");
	scanf("%d",&a2);
	int arr[a1+a2];
	printf("\nEnter array 1 elements:\n"); 
	for(i=0;i<a1+a2;i++){
	if(i==a1)
	{
		printf("Enter array 2 elements:");
	}
	scanf("%d",&arr[i]);
}
	for(int i=0;i<a1+a2-1;i++)
		for(int j=0;j<a1+a2-i-1;j++){
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
		printf("erged array im Ascending order:");
		for(i=0;i<a1+a2;i++){
			printf("%d ",arr[i]);
		}
}
			
			
		
	
	




/*
********** Code by GOVIND KUMAR (11912057   I.T.) *********************************
------------------Program of Insertion sort algorithms------------------------------
*/
#include<stdio.h>

void insertionSort(int arr[], int n) 
{
	int key,j;
	for (int i = 2; i<=n; i++)   //this is for repeating passess 
	{
		key=arr[i];
		j=i-1;
		while(j>0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void display(int arr[], int n)
{
	printf("After insertion Sort your array is :\n");
  for (int i = 1; i <=n; i++)
  {
       printf("%d \n", arr[i]);
  }
}

int main()
{
	int arr[1000],n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for (int i = 1; i <=n; i++)
	{
			scanf("%d",&arr[i]);
	}
    insertionSort(arr,n);
    display(arr,n);
    return 0;
}
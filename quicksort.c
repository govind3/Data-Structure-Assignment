/*
********** Code by GOVIND KUMAR (11912057   I.T.) *********************************
------------------Program of Quick sort algorithms------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y) // swapping function
{    
	int temp=*x;    
	*x=*y;    
	*y=temp; 
} 

int partition(int A[],int l,int h)
{
	int pivot=A[l];  // pivot for taking first element
	int i=l,j=h;    // i start from low and j start from high
	do
	{
		do{i++;}while(A[i]<=pivot); // i should move as long as the elements are smaller or equal
		do{j--;}while(A[j]>pivot);  // j should move as long as the elements are greater
		if (i<j)                    
		{
			swap(&A[i],&A[j]); //swapping two element other than pivot
		}

	}while(i<j);
	swap(&A[l],&A[j]);    //swapping pivot element with A[j]
	return j;             //return j for again partition from(l to J) and from(J+1 to h)
}

void QuickSort(int A[],int l,int h)
{
	int j;
	if (l<h)
	{
		j=partition(A,l,h);        
		QuickSort(A,l,j);    //sort A[l..J]    
		QuickSort(A,j+1,h);    //sort A[j+1...h]
	}
}

int main()
{
	int n,i;
	printf("Enter the size of array:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
	QuickSort(A,0,n); // calling quicksort function
	printf("Your array after quick sorting is :\n");
	for (int i = 0; i < n;i++)        //print all element after sorting
	{
		printf("%d\n", A[i]);
	}
	return  0;

}
/*
********** Code by GOVIND KUMAR (11912057   I.T.) *********************************
------------------Program of Merge sort algorithms------------------------------
*/
#include <stdio.h> 
#include<stdlib.h> 

void Merge(int A[],int l,int mid,int h) 
{    
	int i=l,j=mid+1,k=l;    
	int B[100];       
	while(i<=mid && j<=h)    
	{   // while both subarrays are nonempty     
		if(A[i]<A[j])            
			B[k++]=A[i++];        // copy from left subarray
		else           
		    B[k++]=A[j++];       // copy from right subarray
	}    
	for(;i<=mid;i++)        
		B[k++]=A[i];            // copy any leftover to B
	for(;j<=h;j++)        
		B[k++]=A[j];           // copy any rightover to B
	for(i=l;i<=h;i++)           
		A[i]=B[i];             // copy B back to A
} 

void MergeSort(int A[],int l,int h) 
{   
	int mid;    
	if(l<h)    
	{    // we have at least 2 items    
		mid=(l+h)/2;
        MergeSort(A,l,mid);        // sort A[l..mid]
        MergeSort(A,mid+1,h);      // sort A[mid+1..h] 
        Merge(A,l,mid,h);          // merge everything together  
    } 
}

int main() 
{   
	int n,i; 
	printf("enter the size of array:\n");
	scanf("%d",&n);
	int A[n];
    printf("enter the data:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);      
	MergeSort(A,0,n-1);     // calling megresort function   
	for(i=0;i<n;i++)         //print all element after sorting
	{      
		printf("%d ",A[i]);  
	}  
	printf("\n");        
	return 0; 
}
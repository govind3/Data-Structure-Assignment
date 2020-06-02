/*
********** Code by GOVIND KUMAR (11912057   I.T.) *********************************
---------------------------- PROGRAM-2 --------------------------------------------
Make a program to Sort the following string using a merge sort in increasing order.
 b). "test case".
*/
#include<stdio.h>
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

void main()
{
    int i;
    char C[9]={'t','e','s','t',' ','c','a','s','e'};
    int num=0;
    int A[9];
    printf("your string :test case\n");
    for(i=0;i<9;i++)
    {
        A[i]=C[i]-'0';       //substract '0' from char to get corresponding digit
    }
    MergeSort(A,0,8);
    printf("\nstring in sorted order is :");
    for(i=0;i<9;i++)
    printf("%c",A[i] + '0');      //add '0' to int  to get corresponding char
    printf("\n");

}

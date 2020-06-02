/*
********** Code by GOVIND KUMAR (11912057   I.T.) *********************************
------------------Program of Bubble sort algorithms------------------------------
*/
#include<stdio.h>
int main()
{
	int arr[1000],n,temp,flag;    

	printf("Enter the size of array:\n");         
	scanf("%d",&n);

	printf("Enter the elements of array:\n");  

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("After bubble Sort your array is :\n"); 

	for (int i = 0; i < n-1; i++)     //This for loop is use for passess 
	{
        flag=0;                        
	   for (int j = 0; j <n-i-1; j++)
	   {
            if(arr[j]>arr[j+1])   // compare the element 
		    {
			    temp=arr[j+1];        //swaping
			    arr[j+1]=arr[j];
			    arr[j]=temp;
                flag=1;                
		    }
	    }
	    if(flag==0)          //when array is alreday sorted.
	      break;       
	}
	for (int i = 0; i < n; i++)          //this for loop is use for display the array element after sorting one by one.
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}
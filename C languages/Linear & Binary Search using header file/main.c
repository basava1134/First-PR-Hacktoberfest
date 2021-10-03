#include<stdio.h>
#include"myheader.h"

int main()
{
    int key, size, index;

    printf("\n---------------LINEAR SEARCH---------------\n\n");
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr1[size];

    printf("Enter the elements of the array 1: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);

    index = lin_search(arr1, size, key); //calling the function lin_search()

    if(index==-1)                       //If value returned by lin_search() is -1 then print "Element not found"
    {
        printf("Element not found.");
    }
    else
    {
        printf("Element found at index %d.", index); //print the index value of the found element
    }	 	  	   	   	  	      	    	 	
    
    printf("\n\n\n---------------BINARY SEARCH---------------\n\n");

    printf("Enter the size of array 2: ");
    scanf("%d", &size);

    int arr2[size];

    printf("Enter the elements of the array 2 (Sorted in ascending order): ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    index = bin_search(arr2, 0, size-1, key);  //calling the function bin_search() 

    if(index==-1)                             //If value returned by bin_search() is -1 then print "Element not found"
    {
        printf("Element not found.");
    }
    else
    {
        printf("Element found at index %d.", index); //print the index value of the found element
    }

    return 0;
}	 	  	   	   	  	      	    	 	

// Function for Linear Search
int lin_search(int arr[], int size, int key)
{
    int i;
    for (i=0; i<size; i++)
    {
        if (key==arr[i])
            return i;
    }
    
    return -1;
}

// Function for Binary Search
int bin_search(int arr[], int low, int high, int key )
{
    while(low<=high)
    {
        int mid=(high+low)/2;
        
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }	 	  	   	   	  	      	    	 	
    }
    
    return -1;
}
class Solution{
public:	

    int bs(int *arr , int low , int high ){
        
            if(low == high){
                return  arr[low]  ;
            }
            
            int mid = low + (high-low)/2;
            
            if (mid%2 == 0)
            {
                if (arr[mid] == arr[mid+1])
                    return bs(arr, mid+2, high);
                else
                    return bs(arr, low, mid);
            }
            
            else // If mid is odd
            {
                if (arr[mid] == arr[mid-1])
                    return bs(arr, mid+1, high);
                else
                    return bs(arr, low, mid-1);
            }
            
            
        
    }
	int search(int arr[], int N){
	    //code
	    //int ans = 0;
	    return bs(arr,0,N-1);
	   
	    
	}
};

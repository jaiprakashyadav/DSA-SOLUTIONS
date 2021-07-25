int chocolates(int arr[], int n)
{
    // Complete the function
    int i = 0;
    int j = n-1;
    
    while(i!=j){
        if(arr[j]>arr[i]){
            j--;
        }
        else {
            i++;
        }
        
    }
    return arr[j];
    
}

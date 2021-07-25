class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        int i = 0 ;
        while(i+1<n){
            int temp  =arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =temp;
            i=i+2;
        }
        
    }
};

class Solution{
    public:
    int getSum(int a[], int n) {
        // Your code goes here
        int res =0 ;
        for(int i=0;i<n;i++){
            res+=a[i];
        }
        return res;
    }   
};

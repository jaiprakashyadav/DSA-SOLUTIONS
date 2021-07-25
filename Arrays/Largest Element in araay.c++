class Solution
{
public:
    int largest(vector<int> &A, int n)
    {
        int max = A[0];
        for(int i=1;i<n;i++){
            if(A[i]>max){
                max=A[i];
            }
        }
        return max;
        
    }
};

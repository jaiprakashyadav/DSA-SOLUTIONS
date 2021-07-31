int Solution::removeElement(vector<int> &A, int B) {
    
    int i = 0 , j=0;
    while(i<=A.size()-1){
        if(A[i]!=B){
            swap(A[i],A[j]);
            i++;
            j++;
        }
        else {
            i++;
        }
        
    }
    return j;
    
}

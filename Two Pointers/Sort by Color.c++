void Solution::sortColors(vector<int> &A) {
    int n =A.size();
    int i=0,k=n-1;
    int j = 0;
    while(j<=k){
        if(A[j]==2){
            swap(A[j],A[k]);
            k--;
        }
        else if (A[j]==0){
            swap(A[i],A[j]);
            i++;
            j++;
        }
        else {
            j++;
        }
    }

}

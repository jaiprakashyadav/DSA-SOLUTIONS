int Solution::diffPossible(vector<int> &A, int B) {
    int n = A.size()-1;
    int i=0,j=1;
    while((i<=n)&&(j<=n)){
        if(((A[j]-A[i])==B)&&(i!=j)){
            return i;
        }
        else {
            if((A[j]-A[i])>=B){
                i++;
            }
            else {
                j++;
            }
        }
    }
    return 0;
}

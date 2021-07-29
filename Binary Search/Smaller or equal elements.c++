int Solution::solve(vector<int> &A, int B) {
    int   i = 0 ; 
    int j = A.size()-1;
    int index = -1;
    while(i<=j){
        int mid = (i+j)/2;
        if(A[mid]==B){
            index = mid ; 
            break;
        }
        else if(A[mid]>B){
            j = mid -1;
        }
        else {
            i = mid+1;
        }
    }
    if(index==-1){
        return i;
    }
    while(A[index]==B && index<A.size()){
        index++;
    }
    return index;
}

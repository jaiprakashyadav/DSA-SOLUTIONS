long long check(vector <int> &A, int mid){
    long long temp = 0 ;
    for(int i = 0 ; i<A.size();i++){
        if(A[i]>mid){
            temp+=A[i]-mid;
        }
    }
    return temp;
}

int Solution::solve(vector <int> &A, int B) {
    int start = 0 ;
    int end = *max_element(A.begin(),A.end());
    if(B>end){
        return end;
    }
    int res = -1;
    while(start<=end){
        int mid = start  + (end- start)/2;
        long long ans = check(A,mid);
        if(ans==B){
            return mid;
        }
        else if(ans> B){
            start = mid+1;
            res = mid;
        }
        else {
            end = mid-1;
        }
    }
    return res;
}

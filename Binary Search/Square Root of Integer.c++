int Solution::sqrt(int A) {
    if(A<=1){
        return A;
    }
    int n = A/2;
    int s = 1 ; 
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        int temp = mid * mid;
        if(temp==A){
            return mid;
        }
        else if(temp>A){
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        
    }
    return s-1;
}

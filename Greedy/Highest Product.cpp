int Solution::maxp3(vector<int> &A) {
    int n = A.size()-1;
    sort(A.begin(),A.end() ,  greater <int> ());
    int temp1 = A[0] * A[1];
    int temp2 = A[n] * A[n-1];
    int maxa1 = temp1;
    int maxa2= temp2;
    int flag1 = 0 , flag2 = 0;
    for(int i = 2 ; i<=n ; i++){
        int x = temp1 * A[i];
        if(x > maxa1 ){
            maxa1 =x;
            flag1 =1;
        }
    }
    if(flag1==0){
            maxa1 = maxa1 * A[2];
    }
    for(int j = n-2 ; j>=0 ; j--){
        int x = temp2 * A[j];
        if(x>maxa2){
            maxa2 = x;
            flag2 =1;
        }
    }
    if(flag2==0){
        maxa2 = maxa2 * A[n-2];
    }
    return max(maxa1,maxa2);
}

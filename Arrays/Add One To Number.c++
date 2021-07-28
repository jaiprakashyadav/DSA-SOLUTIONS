vector<int> Solution::plusOne(vector<int> &A) {
    
    vector <int > B;
    int carry = 1;
    for(int  i = A.size()-1;i>=0;i--){
        if(A[i] + carry>=10){
            int rem = (A[i] + carry)%10;
            B.push_back(rem);
            carry = (A[i] + carry)/10;
        }
        else {
            B.push_back(A[i]+carry);
            carry = 0;
        }
    }
    if(carry!=0){
        B.push_back(carry);
    }
    reverse(B.begin(),B.end());
    return B;
    
    
}

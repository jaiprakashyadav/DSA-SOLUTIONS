int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_map <int,int> mp;
    for(int  i = 0 ; i <A.size();i++){
        if(mp.find(A[i])!=mp.end()){
            return 1;
        }
        else {
            mp[A[i]-B] = 1;
            mp[A[i]+B]= 1;
        }
    }
    return 0;
}

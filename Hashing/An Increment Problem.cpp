vector<int> Solution::solve(vector<int> &A) {
    //vector<int> res;
    unordered_map<int,int> mp ; 
    for(int i=0;i<A.size();i++)
    {   
        if(mp.find(A[i])!=mp.end()){
            int x = A[mp[A[i]]];
            int ind = mp[A[i]];
            x+=1;
            A[ind] = x;
            mp.erase(A[i]);
            mp[x]=ind;
            mp[A[i]] =i;
        }
        else {
            mp[A[i]] =i;
        }
    }
    return A;
}

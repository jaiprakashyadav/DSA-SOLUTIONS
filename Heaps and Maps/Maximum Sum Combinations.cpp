class three {
    public :
        int val ; int  idx ; int jdx ;
};
struct cmp {
    bool operator()(three a , three b){
        return a.val<b.val ;
    }
};



vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    priority_queue<three, vector<three>, cmp> pq;
    vector<int> ans;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n = A.size();
    pq.push({A[n-1]+B[n-1] , n-1,n-1});
    set<pair<int , int>>s;
    s.insert({n-1,n-1});
    while(ans.size()!=C){
        three th = pq.top();
        pq.pop();
        int vl = th.val;
        int i = th.idx;
        int j = th.jdx;
        
        ans.push_back(vl);
        
        if(i>0 && s.count({i-1,j})==0){
            pq.push({A[i-1]+B[j] , i-1 , j});
            s.insert({i-1,j});
        }
        if(j>0 && s.count({i,j-1})==0){
            pq.push({A[i]+B[j-1] , i , j-1});
            s.insert({i,j-1});
        }
    }
    return ans;
}

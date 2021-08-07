vector<int> Solution::solve(vector<vector<int> > &A) {
    priority_queue <int> pq;
    vector <int > ans;
    int size = 0;
    for(int i =0;i<A.size();i++){
        for(int j = 0 ; j<A[i].size();j++){
            pq.push(A[i][j]);
            size++;
        }
    }
    for(int j =size-1 ; j>=0;j--){
        ans.push_back(pq.top());
        pq.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

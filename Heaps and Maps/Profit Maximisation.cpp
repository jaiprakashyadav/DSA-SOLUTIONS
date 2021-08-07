int Solution::solve(vector<int> &A, int B) {
    priority_queue <int> pq;
    for(int i=0;i<A.size();i++)
        pq.push(A[i]);
    
    int count =0;
    for(int i =0 ; i<B; i++){
        int x = pq.top() ;
        count += x;
        pq.pop();
        pq.push(x-1);
    }
    return count;
    
}

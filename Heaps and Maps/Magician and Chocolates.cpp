int Solution::nchoc(int A, vector<int> &B) {
    priority_queue <int> p;
    for(int i = 0 ; i<B.size();i++){
        p.push(B[i]);
    }
    int count = 0;
    for(int i =0 ;i<A;i++){
        int x = p.top();
        count+=x;
        p.pop();
        x = x/2;
        p.push(x);  
    }
    return count%1000000007;
}

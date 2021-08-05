vector<int> Solution::prevSmaller(vector<int> &A) {
    vector <int> B;
    stack <int> s;
    for(int i = 0 ; i <A.size();i++){
        if(s.empty()){
            s.push(A[i]);
            B.push_back(-1);
        }
        else {
            int x  = s.top();
            if(x<A[i]){
                B.push_back(x);
                s.push(A[i]);
            }
            else {
                while(!s.empty() && s.top()>=A[i]){
                    s.pop();
                }
                if(s.empty()){
                    s.push(A[i]);
                    B.push_back(-1);
                }
                else {
                    B.push_back(s.top());
                    s.push(A[i]);
                }
            }
        }
    }
    return B;
}

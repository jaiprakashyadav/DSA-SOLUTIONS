vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int ,int> m;
    vector <int> C;
    for(int i =0;i<A.size();i++){
        if(m.find(B-A[i])!=m.end()){
            C.push_back(m[B-A[i]]+1);
            C.push_back(i+1);
            break;
        }
        else {
            if(m.find(A[i])==m.end()){
                m[A[i]] = i;
            }    
        }
    }
    return C;
    
}

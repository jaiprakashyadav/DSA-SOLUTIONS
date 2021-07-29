vector<int> Solution::solve(vector<int> &A) {
    vector <int> ne;
    vector <int> pe;
    vector <int> ans;
    for(int i=0;i<A.size();i++){
        if(A[i]<0){
            ne.push_back(A[i] *A[i]);
        }
        else {
            pe.push_back(A[i]*A[i]);
        }
    }
    reverse(ne.begin(),ne.end());
    int i = 0 , j = 0 , k=0 ;
    while(i<ne.size() && j<pe.size()){
        if(ne[i] < pe[j]){
            ans.push_back(ne[i]);
            i++;
            k++;
        }
        else {
            ans.push_back(pe[j]);
            j++;
            k++;
        }
    }
    while(i<ne.size()){
        ans.push_back(ne[i]);
        i++;
    }
    while(j<pe.size()){
        ans.push_back(pe[j]);
        j++;
    }
    
    
    return ans;

}

vector < vector <int> > ans ; 

void sub( int  i , vector <int> & A , vector <int> temp){
    if(i==A.size()){
        ans.push_back(temp);
        return ; 
    }
    sub( i+1,A,temp);
    temp.push_back(A[i]);
    sub(i+1,A,temp);
    
}



vector<vector<int> > Solution::subsets(vector<int> &A) {
    ans.clear();
    sort(A.begin(),A.end());
    vector <int> temp ; 
    sub(0,A,temp);
    sort(ans.begin(),ans.end());
    return ans;
}

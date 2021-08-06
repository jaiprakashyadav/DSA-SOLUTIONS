vector < vector <int> > ans ; 

void sub( int  i , vector <int> & A , vector <int> temp, int sum , int B){
    if(sum>B){
        return ; 
    }
    if(i==A.size() ){
        if(sum==B)
            ans.push_back(temp);
        return ; 
    }
    sub( i+1,A,temp,sum ,B);      ///skip that element
    
    temp.push_back(A[i]);
    sub( i,A,temp,sum+A[i],B);    // add that element repeteadly
    
    sub(i+1,A,temp,sum+A[i],B);   //add that element & move to next element
    
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    ans.clear();
    sort(A.begin(),A.end());
    vector <int> temp ; 
    sub(0,A,temp,0,B);
    sort(ans.begin(),ans.end());
    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

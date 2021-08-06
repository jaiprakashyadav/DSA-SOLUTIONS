vector <vector <int> >  ans;

void comb( int  i , vector <int> temp , int A , int count , int B){
    if(count==B){
        ans.push_back(temp);
        return;
    }
    if(i> A || count > B){
        return ; 
    }
    
    comb(i+1,temp,A,count,B);
    temp.push_back(i);
    comb(i+1,temp , A, count +1 , B);
    
}



vector<vector<int> > Solution::combine(int A, int B) {
    
    ans.clear();
    vector <int> temp ;
    comb(1,temp ,A, 0,B);
    sort(ans.begin(),ans.end());
    return ans;
}

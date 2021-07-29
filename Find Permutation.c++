vector<int> Solution::findPerm(const string A, int B) {
    
    /*int count = 0 ;
    for(int i = 0 ; i<A.length() ; i++){
        if(A[i]=='D'){
            count++;
        }
    }*/
    int maxa = B;
    int pt = 1;
    vector <int> ans;
    for(int i = 0 ; i <A.length();i++){
        if(A[i]=='I'){
            ans.push_back(pt);
            pt++;
        }
        else {
            ans.push_back(maxa);
            maxa = maxa -1;
        }
    }
    if(A[A.length()-1]=='I'){
        ans.push_back(pt);
    }
    else {
        ans.push_back(maxa);
    }
    return ans;
}

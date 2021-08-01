int sub(vector <int> &a , int b){
    int res = 0 ;
    map <int , int> m;
    int s = 0 , e = 0 ; 
    while(s<a.size()){
        m[a[s]]+=1;
        while(m.size()>b){
            m[a[e]]--;
            if(m[a[e]]==0)
                m.erase(m[a[e]]);
            e++;
        }
        res+=s-e+1;
        s++;
    }
    return res;
}
int Solution::solve(vector<int> &a, int b) {
    return sub(a, b)-helper(a, b-1);
}

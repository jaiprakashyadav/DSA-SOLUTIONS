vector<int> Solution::solve(vector<int> &a, int k) {
    int n=a.size();
    vector<int> mp(n+1,0);
    for(int i=0;i<n;i++){
        mp[a[i]]=i;
    }
    for(int i=0;i<n && k>0;i++){
        if(a[i]==n-i) continue;
        else{
            swap(mp[a[i]],mp[n-i]);
            swap(a[mp[a[i]]],a[i]);
            k--;
        }
    }
return a;
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if(A.size()<=1)     return 0;
    int dis=0;
    for(int i=1;i<A.size();i++)
    {
        int xdis=abs(A[i]-A[i-1]);
        int ydis=abs(B[i]-B[i-1]);
        dis+=max(xdis,ydis);
    
    }
    return dis;
}

int Solution::singleNumber(const vector <int> &A) {
    int c=0;
    for(int i=0;i<A.size();i++)
    {
        c=c^A[i];
    }
    return c;
}

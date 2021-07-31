vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector <int> C;
    int na = A.size();
    int nb = B.size();
    int i=0,j=0;
    while((i<na)&&(j<nb)){
        if(A[i]==B[j]){
            C.push_back(B[j]);
            i++;
            j++;
        }
        else {
            if(A[i]>B[j]){
                j++;
            }
            else {
                i++;
            }
        }
    }
    return C;
}

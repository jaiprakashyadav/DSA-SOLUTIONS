int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int i = 0, j = 0;
    int fuel = 0;
    while(i < A.size()){
        while(fuel >= 0){
            fuel += A[j] - B[j];
            j++;
            j %= A.size();
            if(fuel >= 0 && i == j) return i;
        }
        fuel -= (A[i] - B[i]);
        i++;
    }
    return -1;

}

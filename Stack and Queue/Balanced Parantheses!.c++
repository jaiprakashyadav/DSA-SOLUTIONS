int Solution::solve(string A) {
    stack <char > s ;
    for (int  i = 0 ; i <A.length();i++){
        if(A[i]=='('){
            s.push(A[i]);
        }
        else {
            if(!s.empty()){
                s.pop();
            }
            else {
                return 0;
            }
        }
    }
    if(!s.empty()){
        return 0;
    }
    return 1;
}

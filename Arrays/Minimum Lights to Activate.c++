int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int pt = B-1 ;
    if(B>n){
        pt = n-1;
    }
    int count = 0;
    
    int ans = 0;
    while(pt<n){
        
        if(A[pt]==1){
            A[pt] =0;
            ans+=1;
            int temp = pt;
            temp += B-1;
            if(temp >= n-1){
                return ans;
            }

            pt += 2* B -1;
            if(pt > n-1){
                pt = n-1;
            }
            count= 0 ;
        }
        else {
            pt--;
            count++;
        }
        if(count==B+1){
            return -1;
        }

    }
    return ans;
}

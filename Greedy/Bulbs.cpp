/*void rev( vector <int > &A , int index){
    for(int i = index ; i<A.size();i++){
        if(A[i]==0){
            A[i]=1;
        }
        else {
            A[i]=0;
        }
    }
}
*/

int Solution::bulbs(vector<int> &A) {
    int ans = 0;
    int n = A.size();
    int flag = 1 ;
    for(int i = 0; i<A.size();i++){
        if(A[i]==flag){
            continue ;
        }
        else {
            ans+=1;
            //rev(A,i+1);
            if(flag ==1){
                flag = 0;
            }
            else {
                flag =1;
            }
        }
    }
    return ans ;
}

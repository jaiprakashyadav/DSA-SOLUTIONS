vector <string > ans;
void per(int A , string s  , int count, int open ){
    if(count > 2*A || open<0){
        return ;
    }
    if( count==2*A && open==0 ){
        ans.push_back(s);
        return;
    }
    
    per(A,s+"(",count+1,open+1);
    per(A,s+")",count+1,open-1);
}

vector<string> Solution::generateParenthesis(int A) {
    ans.clear();
    string s = "";
    per(A,s,0,0);
    return ans;
}

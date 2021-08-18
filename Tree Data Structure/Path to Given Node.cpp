/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void find(TreeNode *curr,int B , vector <int> ans,vector <int> &v){
    if(curr==NULL){
        return ;
    }
    ans.push_back(curr->val);
    if(curr->val==B){
        v= ans;
        return;
    }
    
    find(curr->left,B,ans,v);
    find(curr->right,B,ans,v);
    /*if(curr!=NULL){
        ans.push_back(curr->val);
        if(curr->val==B){
            return ans;
        }
        find(curr->left, B,ans);
        find(curr->right,B,ans);
    }*/
} 

vector<int> Solution::solve(TreeNode* A, int B) {
    vector <int> ans ;
    vector <int>v;
    TreeNode *curr = A;
    find(curr,B,ans,v);
    return v;
    //return ans;

}

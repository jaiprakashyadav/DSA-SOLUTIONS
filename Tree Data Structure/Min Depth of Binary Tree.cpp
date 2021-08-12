/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ans ;
void fn(TreeNode * node , int level){
    if(node==NULL){
        return ;
    }
    level +=1;
    if(!node->left && !node->right){
        ans= min(ans,level);
        return  ; 
    }
    fn(node->left,level);
    fn(node->right,level);
}
int Solution::minDepth(TreeNode* A) {
    int level = 0 ;
    ans = INT_MAX ;
    fn(A,level);
    return ans;
}

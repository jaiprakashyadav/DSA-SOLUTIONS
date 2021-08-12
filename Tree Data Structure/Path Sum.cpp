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
void fn(TreeNode* node , int B,int sum){
    if(node==NULL){
        return ; 
    }
    sum+=node->val;
    if(!node->left && !node->right){
        if(sum==B){
            ans=1;
        }
        return ; 
    }
    fn(node->left , B, sum);
    fn(node->right , B, sum);
}
int Solution::hasPathSum(TreeNode* A, int B) {
    ans = 0;
    fn(A,B,0);
    return ans;
}

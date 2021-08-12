/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void func(TreeNode* node ,  int level , int &ans){
    if(node==NULL){
        ans = max(ans, level );
        return ; 
    }
    func(node->left , level +1, ans); 
    func(node->right, level+1, ans);
}

int Solution::maxDepth(TreeNode* A) {
    int ans = 0;
    int level = 0 ;
    func(A, level , ans);
    return ans;
}

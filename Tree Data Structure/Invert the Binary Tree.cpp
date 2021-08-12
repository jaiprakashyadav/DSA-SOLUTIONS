/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inv(TreeNode* node){
    if(node==NULL || ((!node->left) && (!node->right)) ){
        return ;
    }
    TreeNode * temp = node->right;
    node->right = node->left;
    node->left = temp;
    
    inv(node->right);
    inv(node->left);
    
    
}
TreeNode* Solution::invertTree(TreeNode* A) {
    inv(A);
    return A;
}

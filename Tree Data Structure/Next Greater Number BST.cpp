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
TreeNode * ret;
void check(TreeNode * node  , int B){
    if(node==NULL){
        return;
    }
    if(node->val > B){
        if(ans > node->val - B){
            ans = node->val-B;
            ret = node;
        }
        check(node->left,B);
    }
    else {
        check(node->right,B);
    }
}
TreeNode* Solution::getSuccessor(TreeNode* A, int B) {
    ans = INT_MAX;
    ret = NULL;
    check(A,B);
    return ret;
}

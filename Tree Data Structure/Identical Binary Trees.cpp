/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void id(TreeNode *ptr , TreeNode *ptr2 , int &ans){
    if(ptr==NULL && ptr2==NULL){
        return;
    }
    if(ptr==NULL || ptr2==NULL){
        ans=0;
        return;
    }
    if(ptr->val!=ptr2->val){
        ans=0;
        return;
    }
    id(ptr->left,ptr2->left,ans);
    id(ptr->right,ptr2->right,ans);
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    int ans =1;
    id(A,B,ans);
    return ans;
}

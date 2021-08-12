/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
long long ans ;
void  fn(TreeNode * node ,  int k ){
    
    
    if(node==NULL){
        return  ;
    }
    k = ((k*10)%1003 + (node->val)%1003)%1003;
    if(node->left==NULL && node->right==NULL){
        ans= ans%1003 + k%1003;
        return ;
    }
    
    fn(node->left, k);
    fn(node->right, k);
    
}
int Solution::sumNumbers(TreeNode* A) {
    ans = 0 ;
    int k = 0 ; 
    fn(A,0);
    return ans;
    //return ans;
}

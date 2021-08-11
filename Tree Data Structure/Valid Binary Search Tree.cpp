/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 * 
 * typedef struct TreeNode treenode;
 * 
 * treenode* treenode_new(int val) {
 *     treenode* node = (treenode *) malloc(sizeof(treenode));
 *     node->val = val;
 *     node->left = NULL;
 *     node->right = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Root pointer of the tree 
 * 
 * @Output Integer
 */
int ans ;
void ischeck(treenode* node , int mx , int mn){
    if(node==NULL){
        return ;
    }
    
    if(  (node->val > mx) || (node->val <mn)){
        ans = 0 ;
        return ; 
    }
    ischeck(node->left , node->val -1 , mn);
    ischeck(node->right , mx , node->val +1);
}
int isValidBST(treenode* A) {
    ans = 1;
    ischeck(A, INT_MAX , INT_MIN);
    return ans;
}

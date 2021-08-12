/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void tr(TreeNode * root, vector < TreeNode * > &v){
    if(root == NULL){
        return ;
    }
    v.push_back(root);
    tr(root->left,v);
    tr(root->right,v);
}

TreeNode* Solution::flatten(TreeNode* A) {
    vector < TreeNode * > v;
    TreeNode * root =A;
    tr(A, v);
    for(int i = 1 ; i<v.size();i++){
        root->right = v[i];
        root->left = NULL;
        root=root->right;
    }
    return A;
}

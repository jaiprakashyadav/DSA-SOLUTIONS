/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack <TreeNode *> S;
    TreeNode *root = A;
    vector<int> ans;
    while(1){
        while(root){
            S.push(root);
            root=root->left;
        }
        if(S.empty()){
            break;
        }
        ans.push_back(S.top()->val);
        root = S.top()->right;
        S.pop();

    }
    return ans;
}

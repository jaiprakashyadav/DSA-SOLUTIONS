/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* fn( const vector <int> &v , int start , int end){
    if(start>end){
        return NULL ; 
    }
    int mid= (start + end)/2;
    TreeNode * root = new TreeNode(v[mid]);
    root->left = fn(v,start,mid-1);
    root->right = fn(v,mid+1,end);
    return root;
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &v) {
    return fn(v,0,v.size()-1);
}

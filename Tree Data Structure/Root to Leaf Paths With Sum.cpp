/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void ta(TreeNode * root , int B ,int sum, vector <int> v , vector <vector <int > > &ans){
    if(root==NULL){
        return;
    }
    sum+=root->val;
    v.push_back(root->val);
    if(sum==B && root->left==NULL && root->right==NULL){
        ans.push_back(v);
        return;
    }
    if(root->left!=NULL){
        ta(root->left , B, sum, v,ans);
    }
    if(root->right!=NULL){
        ta(root->right , B , sum , v,ans);
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector <vector <int > > ans;
    vector <int> v;
    ta(A,B,0,v,ans);
    return ans;
}

TreeNode * build(vector<int> &pre, int &preIdx,unordered_map<int,int> &m,int start,int end){
    if(start>end) return NULL;
    TreeNode *root = new TreeNode(pre[preIdx++]);
    if(start == end) return root;
    root->left = build(pre,preIdx,m,start,m[root->val]-1);
    root->right = build(pre,preIdx,m,m[root->val]+1,end);
    return root;
 }
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {
    unordered_map<int,int> mp;
    for(int i=0; i<in.size(); i++) mp[in[i]] = i;
    int n=0;
    return build(pre,n,mp,0,in.size()-1);
}

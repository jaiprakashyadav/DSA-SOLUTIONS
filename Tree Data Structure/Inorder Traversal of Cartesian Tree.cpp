TreeNode * helper(vector<int> &A, int start , int end)
{
    if(start > end) return NULL;
    if(start == end) return new TreeNode(A[start]);
    int rootIndex = start;
    int root = A[rootIndex];
    for(int i =start;i<=end;i++)
    {
        if(A[i]>root) 
        {
            rootIndex = i;
            root = A[rootIndex];
        }
    }
    TreeNode * node = new TreeNode(root);
    node->left = helper(A,start,rootIndex-1);
    node->right = helper(A,rootIndex+1,end);
    return node;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    if(A.size()==0) return nullptr;
    return helper(A,0,A.size()-1);
}

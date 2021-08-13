void preoder( TreeNode* A,TreeNode* B ,int &p){
    if(p==0){
        return;
    }

    if((A==NULL && B!=NULL) || (B==NULL && A!=NULL)){
        p = 0;

        return;
    }
    if(A== NULL && B==NULL){
        return;
    }
    if(A->val != B->val){
        p = 0;
    }

    preoder(A->left,B->right,p);
    preoder(A->right,B->left,p);
}

int Solution::isSymmetric(TreeNode* s){
    TreeNode* A= s->left;
    TreeNode* B= s->right;
    int p=1;
    preoder(A,B,p);
    return p;

}

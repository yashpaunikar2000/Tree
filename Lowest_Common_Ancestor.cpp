class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        if(root==p)return p;
        if(root==q)return q;
        TreeNode* lh=lowestCommonAncestor(root->left,p,q);
        TreeNode* rh=lowestCommonAncestor(root->right,p,q);
        if(lh==NULL && rh==NULL)return NULL;
        else if(lh!=NULL && rh==NULL)return lh;
        else if(lh==NULL && rh!=NULL)return rh;
        return root;
    }
};

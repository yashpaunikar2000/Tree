class Solution {
public:
TreeNode* NR=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL)return ;
        flatten(root->right);
        flatten(root->left);
        root->left=NULL;
        root->right=NR;
        NR=root;
    }
};
// here i performed REVERSE PREORDER RIGHT--> LEFT--> ROOT 
// and backtrack with nextRight(NR)

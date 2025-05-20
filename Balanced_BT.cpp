class Solution {
public:
    bool ans=true;
    int HeightOfTree(TreeNode* root){
        if(!root)return 0;
        int lh=HeightOfTree(root->left);
        if(lh==-1)ans=false;
        int rh=HeightOfTree(root->right);
        if(rh==-1)ans=false;
        if(abs(lh-rh)>1)ans=false;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        HeightOfTree(root);
        return ans;
    }
};

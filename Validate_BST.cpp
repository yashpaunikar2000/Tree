class Solution {
public:
bool solve(TreeNode* root,int ub,int lb){
    if(root==NULL){
        return true;
    }
    if(root->val>lb && root->val<ub){
        return solve(root->left,root->val,lb) && solve(root->right,ub,root->val);
    }
    return false;
}
    bool isValidBST(TreeNode* root) {
        int upperbound=INT_MAX;
        int lowerbound=INT_MIN;
        return solve(root,upperbound,lowerbound);
    }
};

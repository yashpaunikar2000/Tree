class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //CASE 1:- agar root hi NULL hua means tree hi nahi hai then return NULL
        if(root==NULL)
        return NULL;
        //CASE 2:- agar p and q dono small hai root ke data se, then recursive call left me lagegi
        if(p->val < root->val && q->val < root->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        //CASE 3:- agar p and q dono large hai root ke data se, then recursive call right me lagegi
        if(p->val > root->val && q->val > root->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        //CASE 4:- agar p large hai root ke data se and q small hai root ke data se 
        // or vice versa then return root;
        return root; 
    }
};

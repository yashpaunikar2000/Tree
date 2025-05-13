        1
       / \
      2   2
     / \ / \
    3  4 4  3
**********************************RECURSION TREE****************************

solve(2, 2)
├── (2 == 2) → check: solve(3, 3)
│   ├── (3 == 3) → check: solve(NULL, NULL) → true
│   └── solve(NULL, NULL) → true
│       ↪ returns true
├── solve(4, 4)
│   ├── (4 == 4) → check: solve(NULL, NULL) → true
│   └── solve(NULL, NULL) → true
│       ↪ returns true
↪ returns true (whole tree is symmetric)

****************************CODE********************************
class Solution {
public:
bool solve(TreeNode* p,TreeNode* q)
{
    if(p==NULL && q==NULL)return true;
    if(p==NULL || q==NULL)return false;
    return (p->val==q->val) && solve(p->left,q->right) && solve(p->right,q->left); 
    
}
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return solve(root->left,root->right);
    }
};

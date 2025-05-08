// ROOT----->LEFT------>RIGHT
input:- 
        1
         \
          2
         /
        3
  **********************************RECURSIVE TREE **********************************
pre(1)
├── push 1 to ans → ans = [1]
├── pre(1->left = NULL) → returns
└── pre(1->right = 2)
     ├── push 2 to ans → ans = [1, 2]
     ├── pre(2->left = 3)
     │     ├── push 3 to ans → ans = [1, 2, 3]
     │     ├── pre(3->left = NULL) → returns
     │     └── pre(3->right = NULL) → returns
     └── pre(2->right = NULL) → returns


  
// CODE
class Solution {
public:
void pre(TreeNode* root,vector<int>&ans)
{
    if(root==NULL)return;
    ans.push_back(root->val);
    pre(root->left,ans);
    pre(root->right,ans);

}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};

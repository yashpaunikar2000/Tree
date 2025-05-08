
input:-
        1
          \
          2
         /
        3

*********************RECURSIVE TREE*********************
  in(1)
├── in(1->left) → in(NULL) → returns
├── push 1 to ans → ans = [1]
└── in(1->right = 2)
     ├── in(2->left = 3)
     │     ├── in(3->left = NULL) → returns
     │     ├── push 3 to ans → ans = [1, 3]
     │     └── in(3->right = NULL) → returns
     ├── push 2 to ans → ans = [1, 3, 2]
     └── in(2->right = NULL) → returns

  
// CODE 

class Solution {
public:
void in(TreeNode* root,vector<int>&ans){
    if(!root){
        return ;
    }
    in(root->left,ans);
    ans.push_back(root->val);
    in(root->right,ans);
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        in(root,ans);
        return ans;
    }
};

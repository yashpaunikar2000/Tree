         1
         \
          2
         /
        3

*************************RECURSION TREE*************************
        postorder(1)
├── postorder(1->left = NULL) → returns
└── postorder(1->right = 2)
     ├── postorder(2->left = 3)
     │     ├── postorder(3->left = NULL) → returns
     │     ├── postorder(3->right = NULL) → returns
     │     └── push 3 to ans → ans = [3]
     ├── postorder(2->right = NULL) → returns
     └── push 2 to ans → ans = [3, 2]
├── push 1 to ans → ans = [3, 2, 1]



class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
    void postorder(TreeNode* root, vector<int>& ans)
    {
        if(root!=NULL)
        {
            postorder(root->left,ans);
            postorder(root->right,ans);
            ans.push_back(root->val);
        }
    }
};

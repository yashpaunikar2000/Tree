p =         1
           / \                         
          2   3

q =         1
           / \
          2   3




*****************************************RECURSION TREE*****************************************
  isSameTree(1, 1)
├── isSameTree(2, 2)
│   ├── isSameTree(NULL, NULL) → true
│   └── isSameTree(NULL, NULL) → true
│       ↪ returns true (2 == 2 and both children same)
└── isSameTree(3, 3)
    ├── isSameTree(NULL, NULL) → true
    └── isSameTree(NULL, NULL) → true
        ↪ returns true (3 == 3 and both children same)
        ↪ final return: true (1 == 1 and left & right subtrees match)

****************************CODE**************************
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;
        if(p->val!=q->val)return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);

    }
};
